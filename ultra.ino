const int trigPin = 9;
const int echoPin = 10;
const int LED = 11;
const int buzzer = 13;
long duration;
int distance;
int safetyDistance;
//int buzzer = 9;  // Connect buzzer to pin 9

// Define musical notes
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523

 //Melody and note durations
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
};
int noteDurations[] = {
  500, 500, 500, 500, 500, 500, 1000,
  500, 500, 500, 500, 500, 500, 1000
};

void setup()
{
    pinMode(buzzer, OUTPUT);
    pinMode(LED, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
   for (int i = 0; i < 14; i++) {
    tone(buzzer, melody[i]);  // Play note
    delay(noteDurations[i]);  // Duration of note
    noTone(buzzer);           // Stop sound before next note
    delay(50);                // Short pause
  }

}


void loop()
{
dos();//
delay(100);
}
void dos()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    distance = duration * 0.034 / 2;

    safetyDistance = distance;
    if (safetyDistance <= 10)
    {
        //digitalWrite(buzzer, HIGH);
        digitalWrite(LED, HIGH);
        playAlertTone();
    }
    else
    {
        //digitalWrite(buzzer, LOW);
        digitalWrite(LED, LOW);
        noTone(buzzer);
    }
    

    Serial.print("Distance: ");
    Serial.println(distance);
}
void playAlertTone() {
    tone(buzzer, 1000);  // 1kHz warning sound
    delay(50);
    noTone(buzzer);
    delay(50);
}
