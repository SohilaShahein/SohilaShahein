#include<iostream>
#include<string>
using namespace std;
#include"calculator2.h"
int calculator_::add(int n1,int n2)
{
	return n1+n2;
}
int calculator_::add(int d,int c,int e)
{
	return d+c+e;
}
float calculator_::add(float j,float k)
{
	return j+k;
}
string calculator_::add(string a,string b)
{
	return a+b;
}
int main()
{
	calculator_ c1;
	cout<<c1.add(5,2)<<"\n";
	cout<<c1.add(5,4,1)<<"\n";
	cout<<c1.add("Hello","world")<<"\n";
	
}
