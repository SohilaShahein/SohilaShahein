#include<iostream>
using namespace std;
int x=2;
void fun1()
{
	x+=2;
	cout<<x<<"\n";
	
}
void fun2()
{
	x++;
	cout<<x<<"\n";
}
void fun3()
{
	cout<<x<<"\n";
}
int main()
{
	fun1();
	fun2();
	fun3();

}
