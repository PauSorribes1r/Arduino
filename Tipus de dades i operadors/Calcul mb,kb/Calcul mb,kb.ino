/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
long drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
 Serial.begin(9600);
 Serial.print("Your HD is ");
 Serial.print(drive_gb);
 Serial.println(" GB large.");
 Serial.print("In theory, it can store ");
 Serial.print(drive_mb=drive_gb*1024);
 Serial.println( " Megabytes, ");
 Serial.print(drive_kb=drive_mb*1024);
 Serial.println(" Kilobytes.");
 Serial.print("But it really only stores ");
 Serial.print(real_drive_mb=drive_mb-2400);
 Serial.println(" Megabytes, ");
 Serial.print(real_drive_kb=drive_kb-4857600);
 Serial.println(" Kilobytes.");
 Serial.print("You are missing " );
 Serial.print(missing_drive_kb=drive_kb-real_drive_kb);
 Serial.println(" Kilobytes!");
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
