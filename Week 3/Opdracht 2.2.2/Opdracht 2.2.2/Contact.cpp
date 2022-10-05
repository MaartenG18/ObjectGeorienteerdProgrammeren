#include "Contact.h"
#include <string.h>


// ----- Constructors -----

Contact::Contact()
{

}

Contact::Contact(std::string lastName, std::string firstName, std::optional<std::string> nickName, std::string email, Date birthDate, std::pair<float, float> location, Status status) : m_lastName{ lastName }, m_firstName{ firstName }, m_nickName{ nickName }, m_email{ email }, m_birthDate{ birthDate }, m_location{ location }, m_status{status}
{

}

// ----- Setters -----

void Contact::setLastName(std::string lastName)
{
	m_lastName = lastName;
}

void Contact::setFirstName(std::string firstName)
{
	m_firstName = firstName;
}

void Contact::setNickName(std::string nickName)
{
	m_nickName = nickName;
}

void Contact::setEmail(std::string email)
{
	m_email = email;
}

void Contact::setDate(Date birthDate)
{
	m_birthDate = birthDate;
}

void Contact::setLocation(std::pair<float, float> location)
{
	m_location = location;
}

void Contact::setStatus(Status status)
{
	m_status = status;
}


// ----- Getters -----

std::string Contact::lastName() const
{
	return m_lastName;
}

std::string Contact::firstName() const
{
	return m_firstName;
}

std::string Contact::nickName() const
{
	return m_nickName;
}

std::string Contact::email() const
{
	return m_email;
}

Date Contact::birthDate() const
{
	return m_birthDate;
}

std::pair<float, float> Contact::location() const
{
	return m_location;
}

Contact::Status Contact::status() const
{
	return m_status;
}