// Nathan Russell_Interactive Fiction.cpp : Defines the entry point for the console application.
// 3/28/2018
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace::std;

//prompts for user input and returns it (easier way than i was doing, do this future me).
string getTextFromUser(string prompt) 
{
	cout << prompt;
	string str;
	cin >> str;
	return str;
}

//like the above function, but numbers instead of letters (int instead of string)
void PrintStoryText(string textToPrint)
{
	cout << "\n=================================================================================\n";
	cout << textToPrint << endl;
	cout << "=================================================================================\n";
	return;
	
}

int main()
{
	//defining strings for inputs
	string username;
	string answer1;
	string answer2;
	string answer3;
	string answer4;
	string replay;

	//do while loop to allow replayability
	do
	{
		//title
		//cout << "=================================================================================\n";

		cout << "Once upon a time, you awoke to find yourself in an unfamiliar location...\n";

		PrintStoryText("\tThe Lost Wanderer and the Amnesiac Child: an Interactive Fiction.");
		//cout << "\tThe Lost Wanderer and the Amnesiac Child: an Interactive Fiction." << endl;

		cout << "\n[Instructions: type one of the specified words to advance the story.]\n\n";

		//start of story
		cout << "\n\nYou groan quietly as you open your eyes. There is nothing but clear sky above you.\nAll that you can see is the tree you woke up under,\nwhich is in a massive and seemingly endless field.\n";

		//runs until a correct prompt is chosen
		while (true)
		{
			answer1 = getTextFromUser("\nDo you 'panic' about your situation or try to 'think'?\n\n");

			if (answer1 == "panic")
			{
				cout << "\nYou begin running around in circles, screaming and waving your hands in the air. \nSomething hits you and your vision is consumed by darkness.";
				goto end;
			}
			else if (answer1 == "think")
			{
				cout << "\nYou can hear waves in the distance, and quickly realize that you are in a grassy field near an ocean.\nThere is a small amount of smoke rising in the distance.";
				break;
			}
			else
			{
				cout << "Incorrect Input\n\n";
			}
		}
		//story
		cout << "\n\n=================================================================================\n";
		cout << "\nIn the hopes of finding answers, you begin to travel towards the smoke.";

		cout << "\n\nOn the way, you are suddenly feeling very thirsty. There is no visible source of water nearby, so you press on.\n\n";

		cout << "You arrive to find a horrifying sight. What appears to have once been a small village is now a burnt ruin.";
		cout << "\nThere are burnt corpses everywhere, and the stench of death heavily covers the entire area.";

		//same as first while loop, runs until condition is met
		while (true)
		{
			answer2 = getTextFromUser("\n\nDo you 'search' for any survivors, or do you 'run' as far away from the village as you can?\n\n");
			if (answer2 == "search")
			{
				cout << "\nYou search through the wreckage and find a small child. She is unconcious, but alive.";
				break;

			}

			if (answer2 == "run")
			{
				cout << "\nYou run as fast as you can away from the site. \nYou begin hallucinating due to severe dehydration and stumble to your inevitable death." << endl;
				goto end;
			}
		}
		//story
		cout << "\n\n=================================================================================\n\n";
		cout << "\nYou bandage the childs wounds with some of the clean cloth from your clothes, ripping your pants in the process.";
		cout << "\nHaving bandaged the sleeping child, you hoist the poor thing up onto your back. \n You carefully carry her back to the tree you awoke under, far away from the village of death.";
		cout << "\nYou are now much more thirsty than before, and the injured child might also need water.\nYou head back to the destroyed village and find a well.";
		cout << "\nYou pull water from the well and carefully taste it. It is Fresh!";
		cout << "\nYou bring some water back to the young child and wash the wounds carefully.";
		cout << "\n\nThe sun is beginning to set, and the temperature is dropping fast. \nYou begin to make a small campfire and head back to the village to see if any tarps or blankets survived the fire.";
		cout << "\n\n\n\tEnd of Part 1...";

		//cout << "You cannot protect both, do you save the child, or your only chance to leave the island?


	end:
		//scenario does not matter, getTextfromuser works anywhere a cout/cin is located
		//end is looped via use of do while loop
		while (true)
		{
			replay = getTextFromUser("\n\nDo you want to play again? (type yes or no)\n\n");
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

	} while (replay == "Yes" || replay == "yes"); //replays loop as long as yes is true
	system("pause");
	return 0;
}

