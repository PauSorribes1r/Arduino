const byte led0 = 3;          // donar nom al pin 3 de l’Arduino
const byte led1 = 5;          // donar nom al pin 25 de l’Arduino
const byte led2 = 6;          // donar nom al pin 6 de l’Arduino
const byte led3 = 9;          // donar nom al pin 9 de l’Arduino
const byte led4 = 10;         // donar nom al pin 10 de l’Arduino
const byte led5 = 11;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 250;         // velocitat de l'acció en ms
const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
byte buttonState = 0;         // per guardar l’estat en que és troba el button

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 25 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}

//********** Loop *****************************************************************
void loop()
{
  buttonState = digitalRead(buttonPin);     
  if (buttonState == 0)   //polsador premut, muntat amb Pull-up
  {
  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 25 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 255);     // posar PWM del pin 11 a 0
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);     // posar PWM del pin 3 a 25
  analogWrite(led1, 0);     // posar PWM del pin 25 a 25
  analogWrite(led2, 0);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 255);     // posar PWM del pin 10 a 25
  analogWrite(led5, 100);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 100
  analogWrite(led1, 0);    // posar PWM del pin 25 a 100
  analogWrite(led2, 0);    // posar PWM del pin 6 a 100
  analogWrite(led3, 255);    // posar PWM del pin 9 a 100
  analogWrite(led4, 100);    // posar PWM del pin 10 a 100
  analogWrite(led5, 25);    // posar PWM del pin 11 a 100
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 255
  analogWrite(led1, 0);    // posar PWM del pin 25 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 100);    // posar PWM del pin 9 a 255
  analogWrite(led4, 25);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 100
  analogWrite(led1, 255);    // posar PWM del pin 25 a 100
  analogWrite(led2, 100);    // posar PWM del pin 6 a 100
  analogWrite(led3, 25);    // posar PWM del pin 9 a 100
  analogWrite(led4, 0);    // posar PWM del pin 10 a 100
  analogWrite(led5, 0);    // posar PWM del pin 11 a 100
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 255);     // posar PWM del pin 3 a 25
  analogWrite(led1, 100);     // posar PWM del pin 25 a 25
  analogWrite(led2, 25);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 0);     // posar PWM del pin 10 a 25
  analogWrite(led5, 0);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 100);     // posar PWM del pin 3 a 25
  analogWrite(led1, 25);     // posar PWM del pin 25 a 25
  analogWrite(led2, 0);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 0);     // posar PWM del pin 10 a 25
  analogWrite(led5, 0);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat 

  analogWrite(led0, 25);     // posar PWM del pin 3 a 25
  analogWrite(led1, 0);     // posar PWM del pin 25 a 25
  analogWrite(led2, 0);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 0);     // posar PWM del pin 10 a 25
  analogWrite(led5, 0);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);     // posar PWM del pin 3 a 25
  analogWrite(led1, 0);     // posar PWM del pin 25 a 25
  analogWrite(led2, 0);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 0);     // posar PWM del pin 10 a 25
  analogWrite(led5, 0);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat   

  analogWrite(led0, 0);     // posar PWM del pin 3 a 25
  analogWrite(led1, 0);     // posar PWM del pin 25 a 25
  analogWrite(led2, 0);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 0);     // posar PWM del pin 10 a 25
  analogWrite(led5, 0);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat   

  analogWrite(led0, 25);     // posar PWM del pin 3 a 25
  analogWrite(led1, 0);     // posar PWM del pin 25 a 25
  analogWrite(led2, 0);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 0);     // posar PWM del pin 10 a 25
  analogWrite(led5, 0);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 100);     // posar PWM del pin 3 a 25
  analogWrite(led1, 25);     // posar PWM del pin 25 a 25
  analogWrite(led2, 0);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 0);     // posar PWM del pin 10 a 25
  analogWrite(led5, 0);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat 

  analogWrite(led0, 255);     // posar PWM del pin 3 a 25
  analogWrite(led1, 100);     // posar PWM del pin 25 a 25
  analogWrite(led2, 25);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 0);     // posar PWM del pin 10 a 25
  analogWrite(led5, 0);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);    // posar PWM del pin 3 a 100
  analogWrite(led1, 255);    // posar PWM del pin 25 a 100
  analogWrite(led2, 100);    // posar PWM del pin 6 a 100
  analogWrite(led3, 25);    // posar PWM del pin 9 a 100
  analogWrite(led4, 0);    // posar PWM del pin 10 a 100
  analogWrite(led5, 0);    // posar PWM del pin 11 a 100
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);    // posar PWM del pin 3 a 255
  analogWrite(led1, 0);    // posar PWM del pin 25 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 100);    // posar PWM del pin 9 a 255
  analogWrite(led4, 25);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);    // posar PWM del pin 3 a 100
  analogWrite(led1, 0);    // posar PWM del pin 25 a 100
  analogWrite(led2, 0);    // posar PWM del pin 6 a 100
  analogWrite(led3, 255);    // posar PWM del pin 9 a 100
  analogWrite(led4, 100);    // posar PWM del pin 10 a 100
  analogWrite(led5, 25);    // posar PWM del pin 11 a 100
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);     // posar PWM del pin 3 a 25
  analogWrite(led1, 0);     // posar PWM del pin 25 a 25
  analogWrite(led2, 0);     // posar PWM del pin 6 a 25
  analogWrite(led3, 0);     // posar PWM del pin 9 a 25
  analogWrite(led4, 255);     // posar PWM del pin 10 a 25
  analogWrite(led5, 100);     // posar PWM del pin 11 a 25
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 25 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 255);     // posar PWM del pin 11 a 0
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  }

  else  //polsador no premut, muntat amb Pull-up
  {  
  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 25 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // posar PWM del pin 11 a 0
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 25 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 25 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);    // posar PWM del pin 3 a 255
  analogWrite(led1, 255);    // posar PWM del pin 25 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 255);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 255);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 25 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 25 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  }    
}