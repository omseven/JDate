/*
 Name:		JDateLib.cpp
 Created:	6/2/2016 2:32:14 PM
 Author:	Omid Golmakani
 Editor:	http://www.visualmicro.com
*/

#include "JDateLib.h"
//Constructor

Date::Date(int iYear, int iMonth, int iDay)
{
	_iYear = iYear;
	_iMonth = iMonth;
	_iDay = iDay;
}

//Member Functions

String Date::JDate()
{
	int tt = 0, sD = 0;
	int sYear = 0, sMonth = 0, sDay = 0;
	int dWM[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
	int dWKM[12] = { 0,31,60,91,121,152,182,213,244,274,305,335 };
	int IM[12] = { 31,31,31,31,31,31,30,30,30,30,30,29 };
	int IKM[12] = { 31,31,31,31,31,31,30,30,30,30,30,30 };

	if (_iYear == ((_iYear / 4) * 4)) {
		if ((_iMonth > 2 & _iDay > 19) || _iMonth > 3) {
			sYear = _iYear - 621;
			tt = dWKM[_iMonth - 1] + _iDay - 80;
		}
		else {
			sYear = _iYear - 622;
			tt = dWKM[_iMonth - 1] + _iDay + 285;
		}
	}
	else {
		if ((_iMonth > 2 & _iDay > 20) || _iMonth > 3) {
			sYear = _iYear - 621;
			tt = dWM[_iMonth - 1] + _iDay - 80;
		}
		else {
			sYear = _iYear - 622;
			tt = dWM[_iMonth - 1] + _iDay + 285;
		}
	}
	sD = tt;
	if (sD > 185) {
		sMonth = 7 + ((sD - 186) / 30);
		sDay = sD - (185 + (((sD - 186) / 30) * 30));

		if ((_iYear - 1) == (((_iYear - 1) / 4) * 4) & _iMonth < 4) {
			sD = sD;
			sMonth = 7 + ((sD - 186) / 30);
			sDay = 1 + sD - (185 + (((sD - 186) / 30) * 30));
		}
	}
	if (sD < 186) {
		sMonth = ((sD) / 31) + 1;
		sDay = (1 + sD - ((sMonth - 1) * 31));
	}
	String stringOne = String(sYear) + "/" + String(sMonth) + "/" + String(sDay);

	return  stringOne;
	
}
int Date::JYear()
{
	int tt = 0, sD = 0;
	int sYear = 0, sMonth = 0, sDay = 0;
	int dWM[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
	int dWKM[12] = { 0,31,60,91,121,152,182,213,244,274,305,335 };
	int IM[12] = { 31,31,31,31,31,31,30,30,30,30,30,29 };
	int IKM[12] = { 31,31,31,31,31,31,30,30,30,30,30,30 };

	if (_iYear == ((_iYear / 4) * 4)) {
		if ((_iMonth > 2 & _iDay > 19) || _iMonth > 3) {
			sYear = _iYear - 621;
			tt = dWKM[_iMonth - 1] + _iDay - 80;
		}
		else {
			sYear = _iYear - 622;
			tt = dWKM[_iMonth - 1] + _iDay + 285;
		}
	}
	else {
		if ((_iMonth > 2 & _iDay > 20) || _iMonth > 3) {
			sYear = _iYear - 621;
			tt = dWM[_iMonth - 1] + _iDay - 80;
		}
		else {
			sYear = _iYear - 622;
			tt = dWM[_iMonth - 1] + _iDay + 285;
		}
	}
	sD = tt;
	if (sD > 185) {
		sMonth = 7 + ((sD - 186) / 30);
		sDay = sD - (185 + (((sD - 186) / 30) * 30));

		if ((_iYear - 1) == (((_iYear - 1) / 4) * 4) & _iMonth < 4) {
			sD = sD;
			sMonth = 7 + ((sD - 186) / 30);
			sDay = 1 + sD - (185 + (((sD - 186) / 30) * 30));
		}
	}
	if (sD < 186) {
		sMonth = ((sD) / 31) + 1;
		sDay = (1 + sD - ((sMonth - 1) * 31));
	}

	return  sYear;
}
int Date::JDay()
{
	int tt = 0, sD = 0;
	int sYear = 0, sMonth = 0, sDay = 0;
	int dWM[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
	int dWKM[12] = { 0,31,60,91,121,152,182,213,244,274,305,335 };
	int IM[12] = { 31,31,31,31,31,31,30,30,30,30,30,29 };
	int IKM[12] = { 31,31,31,31,31,31,30,30,30,30,30,30 };

	if (_iYear == ((_iYear / 4) * 4)) {
		if ((_iMonth > 2 & _iDay > 19) || _iMonth > 3) {
			sYear = _iYear - 621;
			tt = dWKM[_iMonth - 1] + _iDay - 80;
		}
		else {
			sYear = _iYear - 622;
			tt = dWKM[_iMonth - 1] + _iDay + 285;
		}
	}
	else {
		if ((_iMonth > 2 & _iDay > 20) || _iMonth > 3) {
			sYear = _iYear - 621;
			tt = dWM[_iMonth - 1] + _iDay - 80;
		}
		else {
			sYear = _iYear - 622;
			tt = dWM[_iMonth - 1] + _iDay + 285;
		}
	}
	sD = tt;
	if (sD > 185) {
		sMonth = 7 + ((sD - 186) / 30);
		sDay = sD - (185 + (((sD - 186) / 30) * 30));

		if ((_iYear - 1) == (((_iYear - 1) / 4) * 4) & _iMonth < 4) {
			sD = sD;
			sMonth = 7 + ((sD - 186) / 30);
			sDay = 1 + sD - (185 + (((sD - 186) / 30) * 30));
		}
	}
	if (sD < 186) {
		sMonth = ((sD) / 31) + 1;
		sDay = (1 + sD - ((sMonth - 1) * 31));
	}

	return  sMonth;
}
int Date::JMonth()
{
	int tt = 0, sD = 0;
	int sYear = 0, sMonth = 0, sDay = 0;
	int dWM[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
	int dWKM[12] = { 0,31,60,91,121,152,182,213,244,274,305,335 };
	int IM[12] = { 31,31,31,31,31,31,30,30,30,30,30,29 };
	int IKM[12] = { 31,31,31,31,31,31,30,30,30,30,30,30 };

	if (_iYear == ((_iYear / 4) * 4)) {
		if ((_iMonth > 2 & _iDay > 19) || _iMonth > 3) {
			sYear = _iYear - 621;
			tt = dWKM[_iMonth - 1] + _iDay - 80;
		}
		else {
			sYear = _iYear - 622;
			tt = dWKM[_iMonth - 1] + _iDay + 285;
		}
	}
	else {
		if ((_iMonth > 2 & _iDay > 20) || _iMonth > 3) {
			sYear = _iYear - 621;
			tt = dWM[_iMonth - 1] + _iDay - 80;
		}
		else {
			sYear = _iYear - 622;
			tt = dWM[_iMonth - 1] + _iDay + 285;
		}
	}
	sD = tt;
	if (sD > 185) {
		sMonth = 7 + ((sD - 186) / 30);
		sDay = sD - (185 + (((sD - 186) / 30) * 30));

		if ((_iYear - 1) == (((_iYear - 1) / 4) * 4) & _iMonth < 4) {
			sD = sD;
			sMonth = 7 + ((sD - 186) / 30);
			sDay = 1 + sD - (185 + (((sD - 186) / 30) * 30));
		}
	}
	if (sD < 186) {
		sMonth = ((sD) / 31) + 1;
		sDay = (1 + sD - ((sMonth - 1) * 31));
	}

	return  sDay;
}
