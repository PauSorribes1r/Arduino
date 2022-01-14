/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino      

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{

  tone(xiulet, 1000);    // xiulet de durada valPot0
  delay(300);
  noTone(xiulet);
  delay(300);
   tone(xiulet, 750);    // xiulet de durada valPot0
  delay(300);
  noTone(xiulet);
  delay(300);
   tone(xiulet, 500);    // xiulet de durada valPot0
  delay(300);
  noTone(xiulet);
  delay(300);
   tone(xiulet, 250);    // xiulet de durada valPot0
  delay(300);
  noTone(xiulet);
  delay(1000);
 
}
