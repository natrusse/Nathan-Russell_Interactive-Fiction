// Nathan Russell_Interactive Fiction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace::std;


int main()
{
	
	string username;
	string answer1;
	string replay;

	do 
	{
		cout << "Once upon a time, you awoke to find yourself in another world...\n\n";

		cout << "\tSummoned: an Interactive Fiction." << endl;

		cout << "\n[Instructions: type one of the specified words to advance the story.]\n";

		cout << "\nYou groan quietly as you open your eyes. There is nothing but clear sky above you.\nAll you are underneath a tree in a massive and seemingly endless field.\n";

		while (true) {
			cout << "Do you panic or think?";
			cin >> answer1;
			if (answer1 == "panic")
			{
				cout << "You begin running around in circles, screaming and waving your hands in the air. \nSomething hits you and your vision is consumed by darkness.";
				goto end;
			}
			else if (answer1 == "think")
			{
				cout << "You take in your surroundings, and quickly realize that you are in a grassy field near an ocean.\nThere is a small amount of smoke rising in the distance.";
				break;
			}
			else
			{
				cout << "Incorrect Input\n\n";
			}
		}
		
		cout << "In the hopes of finding answers, you begin to travel towards the smoke.";
		cout << "\nOn the way, you are suddenly feeling very thirsty. There is no visible source of water nearby, so you press on.\n";
		cout << "";
		cout << "";
		cout << "";




		end:
		while (true)
		{
			cout << "Do you want to try again? (type yes or no)";
			cin >> replay;
			if (replay == "yes" || replay == "Yes")
			{
				return main();
			}
			else if (replay == "no" || replay == "No")
			{
				exit(0);
			}
			else
			{
				cout << "Incorrect Input\n\n";
			}
		}

	} while (replay == "Yes" || replay == "yes");
	system("pause");
	return 0;
}

