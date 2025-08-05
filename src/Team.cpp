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

// Getters
vector<Player> Team::GetPlayers()
{
	return m_Players;
}

Player Team::GetPlayer(int index)
{
	return m_Players.at(index);
}

Person Team::GetCoach()
{
	return m_Coach;
}

// Setters
void Team::SetCoach(Person p)
{
	m_Coach = p;
}

// Methods
void Team::AddPlayer(Player p)
{
	m_Players.push_back(p);
}

void Team::DeletePlayer(int index)
{
	m_Players.erase(m_Players.begin()+index);
}

void Team::Clear()
{
	m_Players.clear();
}


// Output
ostream& operator<<(ostream& os, const Team& t)
{
	t._display(os);
	return os;
}

//--
void Team::_display(ostream& os) const
{
	(void)os;
	os << "Coach : " << m_Coach << endl;
	os << "Joueurs : " << endl;
	for (auto i : m_Players)
		os << i << endl;
}

// Manage
void Team::_copy(const Team& s)
{
	m_Players = s.m_Players;
	m_Coach = s.m_Coach;
}

//--
void Team::_destroy(void)
{
	
}