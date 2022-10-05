#pragma once

#include <string>
#include <optional>
#include "Date.h"

class Contact
{
public:
	enum class Status { Single, Roommates, Cohabitants, Engaged, Married, Separated, Divorced };

	Contact(); // default constructor
	Contact(std::string lastName, std::string firstName, std::optional<std::string> nickName, std::string email, Date birthDate, std::pair<float, float> location, Status status); // custom constructor

	std::string lastName() const; // getter
	std::string firstName() const; // getter
	std::string nickName() const; // getter
	std::string email() const; // getter
	Date birthDate() const; // getter
	std::pair<float, float> location() const; // getter
	Status status() const; // getter

private:
	std::string m_lastName{};
	std::string m_firstName{};
	std::string m_nickName{};
	std::string m_email{};
	Date m_birthDate{};
	std::pair<float, float> m_location{};
	Status m_status{};

	void setLastName(std::string lastName); // setter
	void setFirstName(std::string firstName); // setter
	void setNickName(std::string nickName); // setter
	void setEmail(std::string email); // setter
	void setDate(Date birthDate); // setter
	void setLocation(std::pair<float, float> location); // setter
	void setStatus(Status status); // setter
};