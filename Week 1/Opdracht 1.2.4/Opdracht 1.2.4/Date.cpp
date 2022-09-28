# include "Date.h"
# include <string.h>
# include <iostream>

Date::Date()
{
	m_day = 01;
	m_month = 01;
	m_year = 2000;
}

Date::Date(std::string date) 
{
	m_day = stoi(date.substr(0, 2));
	m_month = stoi(date.substr(3, 2));
	m_year = stoi(date.substr(6, 4));
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