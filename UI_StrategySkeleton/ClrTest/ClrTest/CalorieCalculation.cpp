


class IDietCalculator
{	
public:
	virtual int getTargetCalorieIntake()=0;
};

class BMRBasedDietCalculator :public IDietCalculator
{

	/*virtual*/
	
	int getTargetCalorieIntake()
	{
		return 99;
	}

};

class RMRBasedDietCalculator :public IDietCalculator
{

	/*virtual*/

	int getTargetCalorieIntake()
	{
		return 999;
	}

};