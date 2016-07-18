/*
 Name:		JDateLib.h
 Created:	6/2/2016 2:32:14 PM
 Author:	Omid Golmakani
 https://github.com/omseven/JDate
*/

#ifndef _JDateLib_h
#define _JDateLib_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Date
{
public:
	Date(int iYear, int iMonth, int iDay);
	String JDate();
	int JYear();
	int JMonth();
	int JDay();
private:
	int _iYear;
	int _iMonth;
	int _iDay;
};

#endif



