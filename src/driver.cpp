#include "headers.h"
#include "food.h"
#include "simpleFood.h"
#include "compositeFood.h"
#include "loadFood.h"
#include "loadFoodDb.h"
#include "loadFoodRemote.h"
#include "save.h"
#include "menu.h"

int main()
{
	LoadFoodDb data;
	data.loadFood();
	
	typedef map<string,list<string> > myMap;

	LoadFoodRemote remote;
	remote.setTotalSimpleFood(data.returnSimpleFoodData());
	remote.loadFood();

	myMap simpleDatabase = remote.returnTotalSimpleFood();
	myMap compositeDatabase = data.returnCompositeFoodData();

	SimpleFood simpleFood(simpleDatabase);
	CompositeFood compositeFood(compositeDatabase,simpleDatabase);

	int selection = -1;
	while (selection != 6)
	{
		Menu::level1();

		cin >> selection;

		if (selection == 1)
		{
			Menu::level11();
			simpleFood.print();
		}
		else if (selection == 2)
		{
			Menu::level12();
			compositeFood.print();
		}
		else if (selection == 3)
		{
			Menu::level13();
			simpleFood.addDetails();
			simpleFood.storeFood();
		}
		else if (selection == 4)
		{
			Menu::level14();
			compositeFood.addDetails();
			compositeFood.storeFood();
		}
		else if (selection == 5)
		{
			Menu::level15();
			Save save(simpleDatabase,compositeDatabase);
		}
		else if (selection == 6)
			continue;
		else
		{
			cout << "Invalid input!!" << endl;
			continue;
		}
	}
	
}