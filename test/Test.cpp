#include <string>
#include <iostream>

//#include "../include/Person.h"
#include "../include/Player.h"
#include "../include/Team.h"
#include "../include/Set.h"

class Test
{
public:

	static void PersonTest()
	{
		Person p1 = Person();
		Person p2 = Person("Henry");
		Person p3 = Person("Harry", "Potter");
		Person p4 = Person(p3);
		Person p5 = p2;

		cout << p1 << endl;
		cout << p2 << endl;
		cout << p3 << endl;
		cout << p4 << endl;
		cout << p5 << endl;
	}

	static void PlayerTest()
	{
		Player p1 = Player();
		Player p2 = Player(23);
		Player p3 = Player(77, "MB");

		Person pe = Person("Henry", "PodBeurre");
		Player p4 = Player(pe);
		Player p5 = Player(pe, 934);
		Player p6 = Player(pe, 934, "OS");
		Player p7 = Player(p3);
		Player p8 = p6;

		cout << p1 << endl;
		cout << p2 << endl;
		cout << p3 << endl;
		cout << p4 << endl;
		cout << p5 << endl;
		cout << p6 << endl;
		cout << p7 << endl;
		cout << p8 << endl;
	}

	static void TeamTest()
	{
		Person pe1 = Person("Henry", "PodBeurre");
		Person pe2 = Person("Ronronne", "Presley");
		Person pe3 = Person("Hermine", "Banger");
		Player p1 = Player(pe1, 15, "S");
		Player p2 = Player(pe2, 53, "MB");
		Player p3 = Player(pe3, 2, "L");

		Team t = Team();
		t.AddPlayer(p1);
		t.AddPlayer(p2);
		t.AddPlayer(p3);

		vector<Player> players = t.GetPlayers();

		cout << "Tous les joueurs :" << endl;
		cout << t << endl;

		cout << "Le 1er : " << t.GetPlayer(0) << endl;

		t.SetCoach(Person("Cassius", "Underground"));
		cout << "Le coach : " << t.GetCoach() << endl;

		cout << "On vire Henry !\n L'equipe :" << endl;
		t.DeletePlayer(0);
		cout << t << endl;

		cout << "On vire tout le monde !\n L'equipe :" << endl;
		t.Clear();
		cout << t << endl;
	}

	static void SetTest()
	{
		// Init Set
		Set s = Set(1);

		int t;

		bool isRunning = true;
		while (isRunning)
		{
			cout << "Which team is scoring ? (0 or 1)" << endl;
			cin >> t;

			s.Scoring(t);
			cout << s.GetScore1() << "-" << s.GetScore2() << endl;

			if (s.GetScore1() == 5 || s.GetScore2() == 5)
			{
				cout << s;
				cout << "End of set" << endl;
				isRunning = false;
			}
		}
	}
};