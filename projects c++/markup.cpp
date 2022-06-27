#include<iostream>
using namespace std;
float cost;
float percentage;
float calculateRetail(float cost,float percentage)
{
	float totalcost=((cost/100)*percentage)+cost;
	return totalcost;
}
int main()
{
	cout<<"Enter cost : ";
	cin>>cost;
	while(cost<0)
	{
		cout<<"Enter positive value ";
		cin>>cost;
	}
	cout<<"Enter percentage : ";
	cin>>percentage;
	while(percentage<0)
	{
		cout<<"Enter positive value ";
		cin>>percentage;
	}
	//float totalprice=calculateRetail(cost, percentage);
	cout<<calculateRetail(cost, percentage)<<endl;
}
