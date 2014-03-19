#include "headers.h"
#include "food.h"
#include "simpleFood.h"
#include "compositeFood.h"
#include "loadFood.h"
#include "loadFoodDb.h"
#include "loadFoodRemote.h"
#include "menu.h"

int main()
{
	LoadFoodDb data;
	data.loadFood();
	
	typedef map<string,list<string> > myMap;

	myMap simpleDatabase = data.returnSimpleFoodData();
	myMap compositeDatabase = data.returnCompositeFoodData();

	SimpleFood simpleFood(simpleDatabase);
	CompositeFood compositeFood(compositeDatabase,simpleDatabase);

	int selection = -1;
	while (selection != 7)
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
			simpleDatabase = simpleFood.returnLatestSimpleDatabase();
			compositeFood.renewCompositeDatabase(compositeDatabase,simpleDatabase);
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
			compositeFood.save();
		}
		else if (selection == 6)
		{
			Menu::level16();
			LoadFoodRemote remote;
			remote.setInitialSimpleFood(data.returnSimpleFoodData());
			remote.loadFood();

			myMap simpleDatabase = remote.returnTotalSimpleFood();

			simpleFood.renewSimpleDatabase(simpleDatabase);
			compositeFood.renewCompositeDatabase(compositeDatabase,simpleDatabase);
		}
		else if (selection == 7)
			continue;
		else
		{
			cout << "Invalid input!!" << endl;
			continue;
		}
	}
	
}