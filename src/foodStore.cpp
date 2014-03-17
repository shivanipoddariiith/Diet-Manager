#include "foodStore.h"
#include "foodStructure.h"

// struct food
// {
// 	int id;
// 	string name;
// 	int servSize;
// 	int calories;
// 	vector<string> nutrients;
// };

void FoodStore::addFood(int id)
{
	int servSize, calories, extra;
	string name;

	cout << "Enter food name: ";
	cin >> name;
	cout << "Enter serving size: ";
	cin >> servSize;
	cout << "Enter total calories: ";
	cin >> calories;

	ofstream simpleFoodDb("simpleFoodDb",ios::app);
	simpleFoodDb << id << "|" << name << "|" << servSize << "|" << calories << "\n";

	simpleFoodDb.close();
}

void FoodStore::displayFood()
{
	string line;
	ifstream simpleFoodDb("simpleFoodDb");

	while(simpleFoodDb >> line)
	{
		stringstream stream(line);
		string word;
		while (getline(stream, word, '|'))
			cout << word << "     ";
		cout << "\n";
	}
	simpleFoodDb.close();

}
