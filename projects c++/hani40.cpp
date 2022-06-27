#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		string name;
		int id;
	public:
		void setData(string n,int i)
		{
			name=n;
			id=i;
		}
		~Student()
		{
			cout<<" Object is destructed "<<endl;
		}
		void print()
		{
			cout<<name<<" "<<id<<endl;
		}
		
};
void F(Student S)
{
	Student S1;
	S1=S;
	S.setData("Ahmed",12345);
	S1.print();
	S.print();
	
}
int main()
{
	Student St1,St2;
	St1.setData("Hussein",11111);
	St2.setData("hani",22222);
	cout<<"going to function "<<endl;
	F(St1);
	cout<<" backing from function "<<endl;
	St1.print();
	St2.print();/*going to function
Hussein 11111
Ahmed 12345
 Object is destructed
 Object is destructed
 backing from function
Hussein 11111
hani 22222
 Object is destructed
 Object is destructed
*/

	
}
