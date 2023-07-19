#define dirPin 2
#define stepPin 3
// pinnen motor 1
#define dirPin2 5
#define steppin2 4
// pinnen motor2
int limit = 7;
int limit28;
// pinnen van de limit switches
int button 6;
long Current Time;
const long motion1 = 3350;
const long motion2 - 2200;
const long motion3 = 64000;
const long motion4 = 1600;
const long motion5 = 20000;
// variabelen voor tijdsberekeningen
Strings "OFF";
// variable voor het starten van de machine
void setup()
{

    Serial.begin(9600);
}
pinMode(stepPin, OUTPUT);
pinMode(dirPin, OUTPUT);
pinMode(stepPin2, OUTPUT);
pinMode(dirPin2, OUTPUT);
pinMode(button, INPUT);
pinMode(limit, INPUT);
pinMode(limit2, INPUT);
digitalWrite(button, HIGH);
digitalWrite(limit, HIGH);
digitalWrite(limit2, HIGH);
void loop()
{
    // put your main code here, to run repeatedly:
    if (digitalRead(button) == LOW)
    { // controle van de status van de button
        if (s == "OFF")
        {
            S = "ON";
        }
        else
    }
    {
        Homing(); // homen
        if (s == "ON")
        {
            3 = "OFF";
            Motion(dirPin, stepPin, LOW, motion1, 650);      // Set height
            Motion(dirPin2, steppin2, LOW, motion2, 15000);  // Rotate base
            Motion(dirPin, stepPin, HIGH, motion3, 450);     // Lift glass
            Motion(dirPin2, stepPin2, LOW, motion4, 8000);   // Rotate base
            Motion(dirPin, stepPin, LOW, motion5, 650);      // Put glass down
            Motion(dirPin2, stepPin2, HIGH, motion2, 15000); // Rotate CCW
            // beweging van de machine
        }
    }
void Homing () // functie voor het homen
(
digitalWrite (dirPin, HIGH);
while (digitalRead(limit) HIGH)
{
}
digitalWrite (stepPin, HIGH);
delayMicroseconds (650);
digitalWrite(stepPin, LOW);
delayMicroseconds (650);
digitalWrite (dirPin, LOW);
}
while (digitalRead(limit2) == HIGH)
{
digitalWrite(stepPin, HIGH);
delayMicroseconds(650);
digitalWrite(stepPin, LOW);
delayMicroseconds(650);
void Motion (richtingPin, Steppin, toestand, tijd, Delay) // fuctie voor het bewegen
(
digitalWrite (richtingPin, toestand);
CurrentTime = millis();
while( millis() - CurrentTime < tijd)
{
        digitalWrite(richtingPin, HIGH);
        delayMicroseconds(Delay);
        digitalWrite(StepPin, LOW);
        delayMicroseconds(Delay);
