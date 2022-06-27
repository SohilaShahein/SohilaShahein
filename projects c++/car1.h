#include<iostream>
#include<string>
using namespace std;
class car_
{
	private:
		string maker;
		int year;
	public:
		string getmaker()
		{
			return maker;
		}
		int getyear()
		{
			return year;
		}
		
		car_(string m,int y):maker(m),year(y)
		{
			
		}
};
