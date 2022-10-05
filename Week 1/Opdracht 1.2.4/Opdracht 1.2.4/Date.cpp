# include "Date.h"
# include <string.h>
# include <iostream>


// ----- Constructors -----

Date::Date() // default constructor with default date
{
	setDay(1);
	setMonth(1);
	setYear(2000);
	checkIsLeapYear(year());
	checkDate(*this);
}

Date::Date(std::string date) // constructor if the date is entered as string
{
	setDay(stoi(date.substr(0, 2)));
	setMonth(stoi(date.substr(3, 2)));
	setYear(stoi(date.substr(6, 4)));
	checkIsLeapYear(year());
	checkDate(*this);
}

Date::Date(int day, int month, int year) : m_day{ day }, m_month{ month }, m_year{year} // constructor to make a date with int's
{
	checkIsLeapYear(year);
	checkDate(*this);
}


// ----- Methods -----

void Date::checkDate(Date date) // method to check if a date is a valid date
{
	if (checkDay(date.day()) == false || checkMonth(date.month()) == false || checkYear(date.year()) == false)
	{
		exit(-1);
	}
	else if (date.month() == 2 && date.isLeapYear() && date.day() > 29)
	{
		std::cerr << "In a leap year february's day can't be greater than 29\n";
		exit(-1);
	}
	else if (date.month() == 2 && date.day() > 28)
	{
		std::cerr << "February's day can't be greater than 28\n";
		exit(-1);
	}
	else if ((date.month() == 4 || date.month() == 6 || date.month() == 9 || date.month() == 11) && date.day() > 30) {
		std::cerr << "The day can't be greater than 30 in this month\n";
		exit(-1);
	}
}

bool Date::checkDay(int day) // method to check if day is valid
{
	if (day < 1 || day > 31)
	{
		std::cerr << "The day is not a valid input\n";
		return false;
	}
	else
	{
		return true;
	}
}

bool Date::checkMonth(int month) // method to check if a month is valid
{
	if (month < 1 || month > 12)
	{
		std::cerr << "The month is not a valid input\n";
		return false;
	}
	else
	{
		return true;
	}
}

bool Date::checkYear(int year) // method to check is a year is valid
{
	if (year < 1) {
		std::cerr << "The year is not a valid input\n";
		return false;
	}
	else
	{
		return true;
	}
}

void Date::checkIsLeapYear(int year) // method to check for a leap year
{
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
	{
		setIsLeapYear(true);
	}
	else
	{
		setIsLeapYear(false);
	}
}


// ----- setters -----

void Date::setDay(int day) // setter to change the day of date object
{
	m_day = day;
}

void Date::setMonth(int month) // setter to change the month of a date object
{
	m_month = month;
}

void Date::setYear(int year) // setter to change the year of a date object
{
	m_year = year;
}

void Date::setIsLeapYear(bool result)
{
	m_isLeapYear = result;
}


// ----- getters -----

int Date::day() const // getter for day
{
	return m_day;
}

int Date::month() const // getter for month
{
	return m_month;
}

int Date::year() const // getter for year
{
	return m_year;
}

bool Date::isLeapYear() const
{
	return m_isLeapYear;
}