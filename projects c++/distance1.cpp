#include<iostream>
using namespace std;
#include"distance1.h"
int main()
{
	Distance d1(5,4.5);
	Distance d2(6,8.5);
	Distance d3=d1+d2;
	d3.display();
}
