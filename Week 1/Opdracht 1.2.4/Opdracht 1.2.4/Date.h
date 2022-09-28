#include <string>
class Date
{
public:
	Date(); // default constructor
	Date(std::string date); // converting constructor

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
};