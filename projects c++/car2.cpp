#include<iostream>
#include<string>
using namespace std;
#include"car2.h"
string car::getmaker()
{
	return maker;
}
int car::getyear()
{
	return year;
}
car::car(string m,int y):maker(m),year(y)
{
	cout<<"Hello"<<"\n";
}
int main()
{
	car c1("toyta",2020);
	cout<<c1.getmaker()<<"\n";
}

