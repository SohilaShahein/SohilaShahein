#include<iostream>
#include<string>
using namespace std;

#include"car.h"
	

int main()
{
	car c1("Honda",2010);
	
	cout<<"The maker of The car is "<<c1.getmaker()<<"\n";
	cout<<"The yearmodel of the car is "<<c1.getyearmodel()<<"\n";
}
