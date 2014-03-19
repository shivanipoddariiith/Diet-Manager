#include "headers.h"
#include "save.h"

Save::Save(Save::myMap &simpleDatabase, Save::myMap &compositeDatabase)
{
	saveData("simpleFoodDb",simpleDatabase);
	saveData("compositeFoodDb",compositeDatabase);
}

void Save::saveData(string sourceName,Save::myMap &data)
{
	const char *src = sourceName.c_str();
	ofstream myFile(src);

	map<string, list<string> >::iterator iter;
	for (iter = data.begin(); iter!=data.end();++iter)
	{
		myFile << iter->first;
		list<string> details = iter->second;
		list<string>::iterator iter2;
		for (iter2 = details.begin(); iter2!=details.end();++iter2)
		{
			myFile << "|" + *iter2;
		}
		myFile << "\n";
	}

	myFile.close();
}