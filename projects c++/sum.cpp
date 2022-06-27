#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int a[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			sum+=a[i];
		}

	}
				cout<<sum<<"\n";

}
