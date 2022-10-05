#pragma once
#include <string>
class Date
{
public:
	Date(); // default constructor
	Date(std::string date); // converting constructor
	Date(int day, int month, int year); // date constructor

	int day() const; // getter
	int month() const; // getter
	int year() const; // getter
	bool isLeapYear() const; //getter

private:
	int m_day{};
	int m_month{};
	int m_year{};
	bool m_isLeapYear{};

	void setDay(int day); // setter
	void setMonth(int month); // setter
	void setYear(int year); // setter
	void setIsLeapYear(bool result); // setter

	bool checkDay(int day); // check if the day is valid
	bool checkMonth(int month); // check if the month is valid
	bool checkYear(int year); // check if the year is valid
	void checkDate(Date date); // check if the combination of the date is valid
	void checkIsLeapYear(int year); // check if the year is a leap year
};