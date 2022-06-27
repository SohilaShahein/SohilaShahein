#include<iostream>
using namespace std;
class Student{
	int id;
	public:
		Student():id(0)
		{
			
		}
		Student(int id):id(id)
		{
			this->id=id;
		}
		void setId(int id)
		{
			this->id=id;
		}
		int getId() const
		{
			return id;
		}
};
int main()
{
	const Student s1(2);
	cout<<s1.getId()<<endl;
	Student s2;
	s2.setId(5);
	cout<<s2.getId()<<endl;
}
