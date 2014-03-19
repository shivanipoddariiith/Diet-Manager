#ifndef LOADFOODREMOTE_H
#define LOADFOODREMOTE_H

#include "headers.h"
#include "loadFood.h"

class LoadFoodRemote : public LoadFood
{
	public:
		typedef map<string,list<string> > myMap;
		void loadFood();
		void setTotalSimpleFood(myMap &);
		myMap & returnTotalSimpleFood();
	private:
		myMap totalSimpleFood;
};

#endif