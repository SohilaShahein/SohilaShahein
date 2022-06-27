#include<iostream>
using namespace std;
#include"Distance.h"
int main()
{
	Distance d1;
	d1.print();
	Distance d2(10,2.5);
	Distance d3(d2);
	d3.print();
	d3.setDistance(12,6.5);
	Distance d4=d3;
	d4.print();
}

