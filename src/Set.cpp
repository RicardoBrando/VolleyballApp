#include "../include/Set.h"

// Constructor
Set::Set(void)
{
	m_Size = 25;
	InitializeScores();
}

// Constructor
Set::Set(int size)
{
	m_Size = size;
	InitializeScores();
}

// Constructor
Set::Set(const Set& s)
{
	_copy(s);
}

//--
Set& Set::operator=(const Set& s)
{
	if (this != &s)
	{
		_destroy();
		_copy(s);
	}
	return *this;
}

// Destructor
Set::~Set(void)
{
	_destroy();
}

//--
void Set::SetScore1(int s1)
{

}

//--
void Set::SetScore2(int s2)
{

}

//--
int Set::GetScore1()
{
	return m_TeamScore1[m_Index];
}

//--
int Set::GetScore2()
{
	return m_TeamScore2[m_Index];
}

//--
ostream& operator<<(ostream& os, const Set& s)
{
	s._display(os);
	return os;
}

//--
void Set::_display(ostream& os) const
{
	(void)os;
	os << "[ ";
	for (int i = 0; i < m_Size; i++) 
	{
		os << ((m_TeamScore1[i] > 0) ? to_string(m_TeamScore1[i]) : "-");
	}
	os << " ]" << endl;

	os << "[ ";
	for (int i = 0; i < m_Size; i++) 
	{
		os << ((m_TeamScore2[i] > 0) ? to_string(m_TeamScore2[i]) : "-");
	}
	os << " ]" << endl;
}

//--
void Set::_copy(const Set& s)
{

}

//--
void Set::_destroy(void)
{
	delete[] m_TeamScore1;
	delete[] m_TeamScore2;
}

//--
void Set::InitializeScores(void)
{
	m_TeamScore1 = new int[m_Size];
	m_TeamScore2 = new int[m_Size];
	for (int i = 0; i < m_Size; i++) {
		m_TeamScore1[i] = 0;
		m_TeamScore2[i] = 0;
	}
	m_CurrentScore1 = 0;
	m_CurrentScore2 = 0;
	m_Index = 0;
}

//--
void Set::Scoring(int team_scoring)
{
	if (m_Index == m_Size)
		IncreaseScoreSize();

	if (team_scoring == 0) {
		m_TeamScore1[m_Index] = ++m_CurrentScore1;
		m_TeamScore2[m_Index] = 0;
	}
	else 
	{
		m_TeamScore1[m_Index] = 0;
		m_TeamScore2[m_Index] = ++m_CurrentScore2;
	}

	m_Index++;
}

//--
void Set::IncreaseScoreSize(void)
{
	m_Size++;
	int* temp1 = new int[m_Size];
	int* temp2 = new int[m_Size];

	for (int i = 0; i < m_Size; i++) {
		temp1[i] = m_TeamScore1[i];
		temp2[i] = m_TeamScore2[i];
	}
	temp1[m_Size - 1] = 0;
	temp2[m_Size - 1] = 0;

	delete[] m_TeamScore1;
	delete[] m_TeamScore2;

	m_TeamScore1 = temp1;
	m_TeamScore2 = temp2;

	temp1 = nullptr;
	temp2 = nullptr;
}