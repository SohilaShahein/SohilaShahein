#include<iostream>
#include<string>
using namespace std;
class car
{
	private:
		string maker;
		int yearmodel;
	public:
		car(string m,int y):maker(m),yearmodel(y){
		
		maker=m;
		yearmodel=y;
	}
		string getmaker();
		int getyearmodel();
	
		
};

