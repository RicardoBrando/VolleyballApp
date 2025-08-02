#ifndef _SET_H_
#define _SET_H_

#include <iostream>
#include <string>

using namespace std;

class Set
{
	friend ostream& operator<<(ostream& os, const Set& S);

public:

	// Constructor
	Set(void);
	Set(int size);
	Set(const Set& s);
	Set& operator=(const Set& S);
	virtual ~Set(void);

	// Accessors
	void SetScore1(int s1);
	void SetScore2(int s2);
	int GetScore1();
	int GetScore2();

	// Methods
	void Scoring(int team_scoring);

private:

	// Object management
	void _display(ostream& os) const;
	void _copy(const Set& s);
	void _destroy(void);

	// Methods
	void InitializeScores(void);
	void IncreaseScoreSize(void);

private:

	int* m_TeamScore1;
	int* m_TeamScore2;
	int m_CurrentScore1;
	int m_CurrentScore2;
	int m_Size;
	int m_Index;
};

#endif //_SET_H_