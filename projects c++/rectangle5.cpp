#include<iostream>
using namespace std;
#include"rectangle5.h"

int main()
{
	Rectangle r1(5.2,6.3);
	Rectangle r2(4.2,8.1);
Rectangle r3=r1.add(r2);
r3.print();
	
}

