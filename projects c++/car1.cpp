#include<iostream>
#include<string>
using namespace std;
#include"car1.h"
int main()
{
	car_ c1("honda",2010);
	cout<<c1.getmaker()<<"\n";
	car_ c2("Toyta",2015);
	cout<<c2.getyear()<<"\n";
return 0;
}

