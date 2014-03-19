#ifndef SAVE_H
#define SAVE

#include "headers.h"

class Save
{
	public:
		typedef map<string,list<string> > myMap;
		Save(myMap &, myMap &);
	private:
		void saveData(string, myMap &);
};



#endif