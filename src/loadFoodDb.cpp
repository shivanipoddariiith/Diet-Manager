#include "loadFoodDb.h"
#include "headers.h"


void LoadFoodDb::loadFood()
{
	load(1,"simpleFoodDb"); //1 = simpleFood
	load(2,"compositeFoodDb"); //2 = compositeFood
}

void LoadFoodDb::load(int source, string sourceName)
{
	const char *src = sourceName.c_str();
	ifstream foodDb(src);
	string value;
	string key;

	while(foodDb >> value)
	{
		key = value.substr(0,2);
		value = value.substr(3);
		// cout << "id: " << key << "\n";

		stringstream stream(value);
		string word;
		list<string> valueList;
		while (getline(stream, word, '|'))
			// cout << word << endl;
			valueList.push_back(word);

		if (source == 1)
		{
			simpleFood[key] = valueList;
			totalSimpleFood++;
		}
		else if (source == 2)
		{
			compositeFood[key] = valueList;
			totalCompositeFood++;
		}
	}

	
	// map<string, string>::iterator iter;
	// for (iter = simpleFood.begin(); iter!=simpleFood.end();++iter)
	// {
	// 	cout << iter->first << endl;
	// 	cout << iter->second << endl;
	// }
	
	foodDb.close();
}

LoadFoodDb::myMap &LoadFoodDb::returnSimpleFoodData()
{
	return simpleFood;
}

LoadFoodDb::myMap &LoadFoodDb::returnCompositeFoodData()
{
	return compositeFood;
}

int LoadFoodDb::returnTotalSimpleFood()
{
	return totalSimpleFood;
}

int LoadFoodDb::returnTotalCompositeFood()
{
	return totalCompositeFood;
}