// Main.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "../include/Set.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	// Init Set
	Set s = Set(1);
	cout << s;

	// Score +
	s.Scoring(0);
	cout << s;
	s.Scoring(1);
	cout << s;

	return 0;
}
