#include<iostream>
using namespace std;
struct person{
	int level;
	int grade[3];
	int sum=0;
	float per;
	
	string name,dept;
	void getdata(){
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter level:";
		cin>>level;
		cout<<"Enter dept: ";
		cin>>dept;
		for(int x=0;x<3;x++){
		
		cout<<"Enter grade: ";
		cin>>grade[x];
		sum+=grade[x];
	}
	float per=sum*100/300;
		
	}
	void showdata()
	{
		cout<<name<<"\t"<<level<<"\t"<<dept<<"\t"<<per<<endl;
	}
	
};
int main()
{
	person pr[3];
	for(int x=0;x<3;x++)
	{
	pr[x].getdata();	
	}
	
	for(int x=0;x<3;x++)
	{
	pr[x].showdata();	
	}
	
	
}
