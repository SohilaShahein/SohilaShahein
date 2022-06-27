#include<iostream>
#include<string>
using namespace std;
int add(int x,int y){
	return x+y;
}

string add(string a,string b)
{
	return a+b;
}
int main()
{
	cout<<add(5,2)<<"\n";
	cout<<add("sohila ","Ahmed")<<"\n";
}
