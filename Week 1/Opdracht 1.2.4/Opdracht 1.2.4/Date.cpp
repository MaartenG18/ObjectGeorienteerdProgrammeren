# include "Date.h"
# include <string.h>
# include <iostream>

Date::Date()
{
	m_day = 01;
	m_month = 01;
	m_year = 2000;
	m_isValid = checkDate(*this);
}

Date::Date(std::string date) 
{
	m_day = stoi(date.substr(0, 2));
	m_month = stoi(date.substr(3, 2));
	m_year = stoi(date.substr(6, 4));
	checkDate(*this);
}

Date::Date(int day, int month, int year) : m_day{day}, m_month(month), m_year(year)
{
	checkDate(*this);
}

void Date::setDay(int day) 
{
	m_day = day;
}

void Date::setMonth(int month)
{
	m_month = month;
}

void Date::setYear(int year)
{
	m_year = year;
}

int Date::day() const
{
	return m_day;
}

int Date::month() const
{
	return m_month;
}

int Date::year() const
{
	return m_year;
}

bool Date::checkDate(Date date)
{
	if (checkDay(date.day()) == false || checkMonth(date.month()) == false || checkYear(date.year()) == false) 
	{
		exit(-1);
	}
	return true;
}

bool Date::checkDay(int day)
{
	if (day < 1 || day > 31) {
		std::cerr << "The day of the date is invalid\n";
		return false;
	}
	else 
	{
		return true;
	}
}

bool Date::checkMonth(int month)
{
	if (month < 1 || month > 12) {
		std::cerr << "The month of the date is invalid\n";
		return false;
	}
	else
	{
		return true;
	}
}

bool Date::checkYear(int year)
{
	if (year < 1) {
		std::cerr << "The year of the date is invalid\n";
		exit(-1);
	}
	else 
	{
		return true;
	}
}