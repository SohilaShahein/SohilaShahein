#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	for(int i=0;i<=30;i++)
	{
		cout<<rand()%(30-20+1)+20<<"\n";
	}
	
}
