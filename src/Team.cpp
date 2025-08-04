#include "../include/Team.h"

// Constructor
Team::Team()
{

}

// Constructor
Team::Team(const vector<Player> players, const string coach) : m_Players(players), m_Coach(coach)
{

}

// Constructor
Team::Team(const Team& t)
{
	_copy(t);
}

//--
Team& Team::operator=(const Team& t)
{
	if (this != &t)
	{
		_destroy();
		_copy(t);
	}
	return *this;
}

// Destructor
Team::~Team(void)
{
	_destroy();
}

//--
ostream& operator<<(ostream& os, const Team& t)
{
	t._display(os);
	return os;
}

//--
void Team::_display(ostream& os) const
{
	(void)os;
	
}

//--
void Team::_copy(const Team& s)
{
	m_Players = s.m_Players;
	m_Coach = s.m_Coach;
}

//--
void Team::_destroy(void)
{
	
}