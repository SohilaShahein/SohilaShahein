#include<iostream>
#include<string>
#include"person.h"
using namespace std;
class student : public person
{
	private:
		int level;
		float gpa;
	public:
		void setlevel(int l)
		{
			level=l;
		}
		void setgpa(float p)
		{
			gpa=p;
		}
		int getlevel()
		{
			return level;
		}
		float getgpa()
		{
			return gpa;
		}
		void display()
		{
			cout<<"This student Basic data "<<"\n";
			person::display();
			cout<<level<<endl<<gpa<<"\n";
		}
		student(int l,float p):level(l),gpa(p)
		{
			
		}
	
};
