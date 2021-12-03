/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int taula2 = 2;
int taula3 = 3;
int taula4 = 4;
int taula5 = 5;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula2);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula2);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula2*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula3);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula3);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula3*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula4);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula4);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula4*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula5);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula5);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula5*i);    
  }

}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************

