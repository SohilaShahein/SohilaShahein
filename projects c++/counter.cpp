#include<iostream>
using namespace std;
#include"counter.h"
int main()
{
	counter c1(5);
	counter c2=c1++;
	cout<<c2.getcount()<<"\n";
}
