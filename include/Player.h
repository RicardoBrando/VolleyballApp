#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Player : virtual public Person
{
	friend ostream& operator<<(ostream& os, const Player& S);

public:

	// Constructor
	Player(const int num=-1, const string role="");
	Player(const Person& p, const int num = -1, const string role = "");
	Player(const Player& p);
	Player& operator=(const Player& S);
	virtual ~Player(void);

	// Accessors


	// Methods


private:

	// Object management
	void _display(ostream& os) const;
	void _copy(const Player& s);
	void _destroy(void);

	// Methods


private:

	int m_Num;
	string m_Role;
};

#endif // _PLAYER_H_