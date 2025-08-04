#ifndef _TEAM_H_
#define _TEAM_H_

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "Person.h"

using namespace std;

class Team
{
	friend ostream& operator<<(ostream& os, const Team& S);

public:

	// Constructor
	Team(void);
	Team(const vector<Player> players, const string coach="");
	Team(const Team& t);
	Team& operator=(const Team& t);
	virtual ~Team(void);

	// Accessors
	

	// Methods
	

private:

	// Object management
	void _display(ostream& os) const;
	void _copy(const Team& t);
	void _destroy(void);

	// Methods
	

private:

	vector <Player> m_Players;
	Person m_Coach;
};

#endif //_TEAM_H_