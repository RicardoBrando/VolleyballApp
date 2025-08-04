#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>

using namespace std;

class Person
{
	friend ostream& operator<<(ostream& os, const Person& S);

public:

	// Constructor
	Person(const string name = "", const string firstname = "");
	Person(const Person& s);
	Person& operator=(const Person& S);
	virtual ~Person(void);

	// Accessors
	string GetName();
	string GetFirstName();
	void SetName(string name);
	void SetFirstName(string firstname);

	// Methods

protected:

	virtual void _display(ostream& os) const;

protected:

	string m_Name;
	string m_FirstName;

private:

	// Object management
	void _copy(const Person& s);
	void _destroy(void);

	// Methods

};

#endif // _PERSON_H_