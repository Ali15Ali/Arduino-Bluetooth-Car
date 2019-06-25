#include <Servo.h>

Servo steuerung;
int in1 = 8;
int in2 = 9;
int aud = 12;
String blueToothVal;
String lastVal; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
steuerung.attach(7);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(aud,OUTPUT);
digitalWrite(aud,HIGH);
steuerung.write(65);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available())
 {
  lastVal=blueToothVal;
  blueToothVal=Serial.read();
  Serial.print(blueToothVal);
 }
if (blueToothVal=="70") //Vorwärts
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
}else if (blueToothVal=="66") //Rückwärts
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
}else if (blueToothVal=="71") //Vorwärts+Links
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  steuerung.write(80);
}else if (blueToothVal=="73") //Vorwärts+Rechts
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  steuerung.write(45);
}else if (blueToothVal=="72") //Rückwärts+Links
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  steuerung.write(80);
}else if (blueToothVal=="74") //Rückwärts+Rechts
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  steuerung.write(45);
}else if(blueTootVal=="65")//Audio
{
  digitalWrite(aud,LOW);
  delay(100);
  digitalWrite(aud,HIGH);
}
else if (blueToothVal=="83") //Stop/Ausgansgsposition
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  steuerung.write(65);
}
if (blueToothVal=="76"&&lastVal!=blueToothVal) //Links
{
  steuerung.write(80);
}else if (blueToothVal=="82"&&lastVal!=blueToothVal) //Rechts
{
  steuerung.write(45);
}
}
