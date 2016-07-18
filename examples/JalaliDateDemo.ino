/*
 Name:		JDate.ino
 Created:	6/2/2016 2:32:14 PM
 Author:	Omid Golmakani
 https://github.com/omseven/JDate
*/

#include "JDateLib.h"
String jdate;            // Jalali Date String
int JY,JM,JD;            // Jalali Year & Month & Day Intiger

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);

}

// the loop function runs over and over again until power down or reset
void loop() {
	Date now(2017, 12, 23);
	jdate = now.JDate();
	JY = now.JYear();
	JM = now.JMonth();
	JD = now.JDay();
	Serial.println(JY);
	Serial.println(JM);
	Serial.println(JD);
	Serial.println(jdate);
	delay(5000);

}
