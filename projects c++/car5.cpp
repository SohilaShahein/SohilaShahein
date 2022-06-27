#include<iostream>
using namespace std;
#include"car5.h"
int car::count=0;
int main()
{
	car c1(2015);
	cout<<"counter reached "<<c1.getcount()<<"\n";
	car c2(2018);
		cout<<"counter reached "<<c2.getcount()<<"\n";
    car c3(2020);
    	cout<<"counter reached "<<c3.getcount()<<"\n";

}
