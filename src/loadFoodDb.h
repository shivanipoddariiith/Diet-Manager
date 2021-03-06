#ifndef LOADFOODDB_H
#define LOADFOODDB_H

#include "headers.h"
#include "loadFood.h"

class LoadFoodDb : public LoadFood
{
	public:
		typedef map<string,list<string> > myMap;
		void loadFood();
		int returnTotalSimpleFood();
		int returnTotalCompositeFood();
		myMap & returnSimpleFoodData();
		myMap & returnCompositeFoodData();
	private:
		void load(int,string);
		int totalSimpleFood;
		int totalCompositeFood;
		myMap simpleFood;
		myMap compositeFood;
};

#endif