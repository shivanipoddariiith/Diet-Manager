/*
 * Search.cpp
 *
 *  Created on: Mar 21, 2014
 *      Author: YBAR
 */

#include "SearchFood.h"

void Search::search(string keywords)
{
	cout<<"Searching In Food"<<endl;
}

void Search::OrSearch(string keywords)
{
	LoadFoodDb data;
	data.loadFood();

	typedef map<string,list<string> > myMap;
	myMap simpleDatabase = data.returnSimpleFoodData();
	myMap compositeDatabase = data.returnCompositeFoodData();

	SimpleFood simpleFood(simpleDatabase);
	CompositeFood compositeFood(compositeDatabase,simpleDatabase);


	/*Seach in SimpleFoodDb*/
	map<string,list<string> >::iterator it;
	list<string> searchlist;
	list<string>::iterator search_it;
	bool flag=false;
	for(it=simpleDatabase.begin();it!=simpleDatabase.end();++it)
	{
		searchlist = it->second;
		for(search_it=searchlist.begin();search_it!=searchlist.end();++search_it)
		{
			if(search_it->compare(keywords)==0)
			{
				flag=true;
				cout<<"found in "<<it->first;
				cout<<endl;
			}
		}
	}

	if(!flag)
	{
		cout<<"Not Found Anywhere!"<<endl;
	}
}

void Search::AndSearch(string keywords)
{
	LoadFoodDb data;
	data.loadFood();
	typedef map<string,list<string> > myMap;
	myMap simpleDatabase = data.returnSimpleFoodData();
	myMap compositeDatabase = data.returnCompositeFoodData();

	SimpleFood simpleFood(simpleDatabase);
	CompositeFood compositeFood(compositeDatabase,simpleDatabase);

	/*Seach in SimpleFoodDb*/
	map<string,list<string> >::iterator it;
	list<string> searchlist;
	list<string>::iterator search_it;
	bool flag=false;
	for(it=simpleDatabase.begin();it!=simpleDatabase.end();++it)
	{
		searchlist = it->second;
		for(search_it=searchlist.begin();search_it!=searchlist.end();++search_it)
		{
			if(search_it->compare(keywords)==0)
			{
				flag=true;
				cout<<"found in "<<it->first;
				cout<<endl;
			}
		}
	}

	if(!flag)
	{
		cout<<"Not Found Anywhere!"<<endl;
	}

}
