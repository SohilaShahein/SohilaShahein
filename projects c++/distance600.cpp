#include<iostream>
using namespace std;
#include"distance600.h"
Distance Distance::add_dist(Distance d1,Distance d2){
	Distance d3;
	feet=d1.feet+d2.feet;
	inches=d1.inches+d2.inches;
	return *this;
}

int main()
{
	Distance d1,d2,d3;
	d1.setdistance(5,7.2);
	d2.setdistance(6,8.6);
	d3.add_dist(d1,d2);
		d3.getdistance();

	
}
