#include<iostream>
using namespace std;
void f(int n)
{
	if(n<1)
	
	return ;
	else
	cout<<n<<endl;
	f(n-1);
}
int main()
{
	f(6);
}
