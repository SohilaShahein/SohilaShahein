#include<iostream>
#include<string>
using namespace std;
class person
{
	private:
		string name;
		string gender;
		float age;
	public:
		void setname(string n)
		{
			name=n;
		}
		void setgender(string g)
		{
			gender=g;
		}
			void setage(float a)
		{
			age=a;
		}
		string getname()
		{
			return name;
		}
		string getgender()
		{
			return gender;
		}
		float getage()
		{
			return age;
		}
		void display()
		{
			cout<<name<<"\n";
			cout<<gender<<"\n";
			cout<<age<<"\n";
		}
		person()
		{
			name="unknown";
			gender="unknown";
			age=0;
		}
		person(string n,string g,float a):name(n),gender(g),age(a)
		{
			
		}
		
};
		


