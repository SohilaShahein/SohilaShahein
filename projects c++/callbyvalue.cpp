#include<iostream>
using namespace std;
void plusx(int x)
{
	x+=300;
	cout<<x<<endl;
}
int main()
{
	int y=100;
	cout<<y<<endl;          //100
	plusx(y);                //400
	cout<<y<<endl;          //100
}
