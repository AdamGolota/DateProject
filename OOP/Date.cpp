#include "Date.h"
#include "iostream"
#include "windows.h"
#include "assert.h"
Date::Date()
{
	SYSTEMTIME t;
	GetLocalTime(&t);
	this->day = t.wDay;
	this->month = t.wMonth;
	this->year = t.wYear;
}

Date::Date(const int & day, const int & month, const int & year)
{
	assert(!setDate(day, month, year));
}


Date::~Date()
{
}

void Date::print()
{
	bool bc = false;
	int year = this->year;
	if (year < 0)
	{
		year *= -1;
		bc = true;
	}
	printf("%02d.%02d.%d", this->day, this->month, this->year);
	if (bc)
		std::cout << " BC";
}

void Date::input()
{
	bool correct;
	int day, month, year;
	do {
		std::cout << "Day: ";
		std::cin >> day;
		std::cout << "Month: ";
		std::cin >> month;
		std::cout << "Year: ";
		std::cin >> year;
		correct = !setDate(day, month, year);
		if (!correct)
			std::cout << "Date incorrect!\n";
	} while (!correct);
}

int Date::setDate(const int & day, const int & month, const int & year)
{
	if (dateCorrect(day, month, year)) {
		this->day = day;
		this->month = month;
		this->year = year;
		return 0;
	}
	else
		return 1;
}

bool Date::leapYear(const int & year)
{
	return year % 4 == 0 && !(year % 100 == 0 && (year/100) % 4 != 0);
}

bool Date::dateCorrect(const int & day, const int & month, const int & year)
{
	int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	daysPerMonth[1] += leapYear(year);
	bool monthCorrect = month > 0 && month < 13;
	bool dayCorrect = day > 0 && day <= daysPerMonth[month-1];
	return monthCorrect && dayCorrect;
}
