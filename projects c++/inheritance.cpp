#include<iostream>
#include<string>
using namespace std;
class person{
	string name;
	string gender;
	public:
		void setName(string n)
		{
			name=n;
		}
		void setGender(string g)
		{
			gender=g;
		}
		string getName()
		{
			return name;
		}
		string getGender()
		{
			return gender;
		}
		
	
};
class student: public person
{
	int level;
	public:
	void setLevel(int l)
	{
		level=l;
		
	}
	int getLevel()
	{
		return level;
	}
	

	
};
int main()
{
	student s1;
	s1.setName("Hussein");
	s1.setGender("male");
	s1.setLevel(2);
	cout<<s1.getName()<<"\t"<<s1.getGender()<<"\t"<<s1.getLevel()<<endl;
	
}
