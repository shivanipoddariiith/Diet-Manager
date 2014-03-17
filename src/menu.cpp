#include "headers.h"
#include "menu.h"


void Menu::level1()
{
	cout << "Menu" << endl;
	cout << "1. Display all simple food in database" << endl;
	cout << "2. Display all composite food in database" << endl;
	cout << "3. Add a simple food" << endl;
	cout << "4. Add a composite food" << endl;
	cout << "5. Import from remote source" << endl;
	cout << "6. Quit" << endl;

}

void Menu::level11()
{
	cout << "List of simple food in the database" << endl;
}

void Menu::level12()
{
	cout << "List of composite food in the database" << endl;
}

void Menu::level13()
{
	cout << "Add a simple food" << endl;
}

void Menu::level14()
{
	cout << "Add a composite food" << endl;
}

void Menu::level15()
{	
	cout << "Add from a remote source" << endl;
}