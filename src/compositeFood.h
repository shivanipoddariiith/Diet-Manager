#ifndef COMPOSITEFOOD_H
#define COMPOSITEFOOD_H

#include "food.h"
#include "headers.h"


class CompositeFood : public Food
{
	public:
		typedef map<string,list<string> > myMap;
		CompositeFood(myMap &, myMap &);
		void addDetails();
		void storeFood();
		void print();
		float calculateCalories(string);
	protected:
		myMap compositeDatabase;


};


#endif