#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1||n==0)
	
		return 1;
	else
	   return n*fact(n-1);
	
}
int main()
{
	cout<<fact(5)<<endl;
	/*int x=30;
	int *ptr=&x;
	int &y=x;
	cout<<ptr<<" "<<*ptr<<endl;
	cout<<*&x<<endl;
	cout<<y<<" "<<&y<<endl;
	*/
	/*int n;
	cin>>n;
	int array[n];
	int *ptr=array;
	for(int y=0;y<n;y++)
	{
		cin>>array[y];
		
	}
	for(int y=0;y<n;y++)
	{
		cout<<(array+y)<<" "<<endl;
		
	}
	*/
	
	
}
