#include <string>
class Date
{
public:
	Date(); // default constructor
	Date(std::string date); // converting constructor
	Date(int day, int month, int year); // date constructor

	void setDay(int day); // setter
	void setMonth(int month); // setter
	void setYear(int year); // setter
	int day() const; // getter
	int month() const; // getter
	int year() const; // getter
private:
	int m_day{};
	int m_month{};
	int m_year{};
	bool m_isValid{};

	bool checkDay(int day); // check if the is valid
	bool checkMonth(int month); // check if the month is valid
	bool checkYear(int year); // check if the year is valid
	bool checkDate(Date date); // check if the combination of the date is valid
};