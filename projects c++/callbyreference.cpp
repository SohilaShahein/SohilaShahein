#include<iostream>
using namespace std;
void plusx(int &x)
{
	x+=300;
}
int main()
{
	int v=100;
	int &y=v;
	cout<<v<<endl;          //100
	plusx(y);
	cout<<v<<endl;          //400
}
