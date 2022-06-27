#include<iostream>
using namespace std;
#include"class counter.h"
int main()
{
	counter c1,c2;
	cout<<" counter c1 = "<<c1.getcount();
	cout<<" counter c2 = "<<c2.getcount();
	c1.incr_count();
	c2.incr_count();
	c2.incr_count();
	cout<<" counter c1 = "<<c1.getcount()<<"\n";
	cout<<"counter c2 = "<<c2.getcount()<<"\n";
	
}
