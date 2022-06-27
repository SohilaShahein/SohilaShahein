#include<iostream>
using namespace std;
#include"rectangle4.h"
float rectangle::getlength()
{
	return length;
}
float rectangle::getwidth()
{
	return width;
}

int main()
{
	rectangle r1(30,10);
	cout<<r1.getlength()<<"\n";
	rectangle r2;
		cout<<r2.getlength()<<"\n";

}

