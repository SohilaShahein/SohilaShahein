#include<iostream>
using namespace std;
class student{
	int id;
	public:
	void address()
	{
		cout<<this<<endl;
	}
	void setId(int id)
	{
		this->id=id;
	}
	void print()
	{
		cout<<"ID is "<<id<<endl;
	}
};
int main()
{
	student s1;
	s1.address();
	s1.setId(450);
	s1.print();
}
