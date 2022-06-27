#include<iostream>
using namespace std;
#include"class rectangle.h"
void Rectangle::setvalues(int h,int w)
{
	height=h;
	width=w;
}
int main()
{
	Rectangle r1;
	r1.setvalues(7,8);
	cout<<"The Area is "<<r1.getarea()<<endl;
}
