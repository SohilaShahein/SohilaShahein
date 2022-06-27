#include<iostream>
#include<string>
using namespace std;
class Student
{
	int id;
	string name;
	public:
		Student(int i,string n):id(i),name(n)
		{
			
		}
		void print()
		{
			cout<<id<<"\t"<<name<<endl;
			
		}
	
	
};
int main()
{
	Student s1(1,"Ali"),s2(2,"Ahmed"),*ptr;
	Student arr[2]={s1,s2};
	ptr=arr;
	for(int x=0;x<2;x++)
	{
		(ptr++)->print();
		}
		}  /*ptr++->print();
		(ptr+x)->print();
	    */
		
		           
	
	

 
	

