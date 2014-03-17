#include "headers.h"
#include "foodStructure.h"
#include "foodStore.h"
#include "menu.h"

int main()
{
	char id[10] = "";
	int nextId;
	ifstream setting("settings");
	setting >> id;
	if (id == "")
	{
		nextId = 1;
	}
	else
		nextId = atoi(id) + 1;

	setting.close();


	int selection = -1;
	while (selection != 6)
	{
		Menu::level1();

		cin >> selection;

		if (selection == 1)
		{
			Menu::level11();
			FoodStore::displayFood();
		}
		else if (selection == 2)
		{
			Menu::level12();
			cout << "Pending..." << endl;
		}
		else if (selection == 3)
		{
			Menu::level13();
			FoodStore::addFood(nextId);
			nextId++;
		}
		else if (selection == 4)
		{
			Menu::level14();
			cout << "Pending..." << endl;
		}
		else if (selection == 5)
		{
			Menu::level15();
			cout << "Pending..." << endl;
		}
		else if (selection == 6)
			continue;
		else
		{
			cout << "Invalid input!!" << endl;
			continue;
		}
	}
	
	ofstream settings("settings");
	settings << nextId;
	settings.close();
	
}