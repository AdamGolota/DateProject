#pragma once
class Date
{
public:
	Date();
	Date(const int &day, const int& month, const int& year);
	~Date();
	void print();
	void input();
	int setDate(const int &day, const int& month, const int& year);
	bool leapYear(const int &year);
private:
	int day;
	int month;
	int year;
	bool dateCorrect(const int &day, const int& month, const int& year);
};

