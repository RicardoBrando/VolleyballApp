#include "../include/Person.h"

// Constructor
Person::Person(const string name, const string firstname) : m_Name(name), m_FirstName(firstname)
{

}

// Constructor
Person::Person(const Person& p)
{
	_copy(p);
}

//--
Person& Person::operator=(const Person& p)
{
	if (this != &p)
	{
		_destroy();
		_copy(p);
	}
	return *this;
}

// Destructor
Person::~Person(void)
{
	_destroy();
}

// Getters
string Person::GetName()
{
	return m_Name;
}

string Person::GetFirstName()
{
	return m_FirstName;
}

// Setters
void Person::SetName(string name)
{
	m_Name = name;
}

void Person::SetFirstName(string firstname)
{
	m_FirstName = firstname;
}

//--
ostream& operator<<(ostream& os, const Person& p)
{
	p._display(os);
	return os;
}

//--
void Person::_display(ostream& os) const
{
	(void)os;
	os << "Name : " << m_Name << ", First Name : " << m_FirstName;
}

//--
void Person::_copy(const Person& p)
{
	(void)p;
	m_Name = p.m_Name;
	m_FirstName = p.m_FirstName;
}

//--
void Person::_destroy(void)
{

}