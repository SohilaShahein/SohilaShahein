#include<iostream>
#include<string>
using namespace std;
class car
{
	private:
		string maker;
		int year;
	public:
		string getmaker();
		int getyear();
		car(string m,int y);
};

