#include "../include/Player.h"

// Constructor
Player::Player(const int num, const string role) : Person(), m_Num(num), m_Role(role)
{

}

// Constructor
Player::Player(const Person& p, const int num, const string role) : Person(p), m_Num(num), m_Role(role)
{

}

// Constructor
Player::Player(const Player& p)
{
	_copy(p);
}

//--
Player& Player::operator=(const Player& p)
{
	if (this != &p)
	{
		_destroy();
		_copy(p);
	}
	return *this;
}

// Destructor
Player::~Player(void)
{
	_destroy();
}

//--
ostream& operator<<(ostream& os, const Player& p)
{
	p._display(os);
	return os;
}

//--
void Player::_display(ostream& os) const
{
	(void)os;

	Person::_display(os);
	
	os << endl;
	os << "Number : " << m_Num << endl;
	os << "Role : " << m_Role << endl;
}

//--
void Player::_copy(const Player& p)
{
	(void)p;

	m_Name = p.m_Name;
	m_FirstName = p.m_FirstName;
	m_Num = p.m_Num;
	m_Role = p.m_Role;
}

//--
void Player::_destroy(void)
{

}