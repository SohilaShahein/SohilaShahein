#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int *ptrx=&x;
	int &y=x;
	cout<<"X: "<<x<<"\t"<<*ptrx<<"\t"<<y<<endl;
	cout<<" X address :"<<&x<<"\t"<<ptrx<<endl;
	x=300;
	cout<<"X : "<<x<<"\t"<<*ptrx<<"\t"<<y<<endl;
	*ptrx=900;
	cout<<"X : "<<x<<"\t"<<*ptrx<<"\t"<<y<<endl;
	y+=900;
	cout<<"X : "<<x<<"\t"<<*ptrx<<"\t"<<y<<endl;


}
