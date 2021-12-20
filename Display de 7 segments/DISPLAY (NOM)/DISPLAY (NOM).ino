const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11;
unsigned long temps = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(segA, OUTPUT);
pinMode(segB, OUTPUT);
pinMode(segC, OUTPUT);
pinMode(segD, OUTPUT);
pinMode(segE, OUTPUT);
pinMode(segF, OUTPUT);
pinMode(segG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  delay(temps);       

  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  delay(temps);             

  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11
  delay(temps);             

  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11
  delay(temps);             

  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  delay(temps);        

  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11
  delay(temps);        

  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  delay(temps);        

  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  delay(temps);   

  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11
  delay(temps);  

  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  delay(temps);   

  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  delay(temps);       

  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  delay(temps);      


}
