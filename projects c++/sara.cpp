#include<iostream>
using namespace std;
class student{
	static int count;
	public:
		student()
		{
			count++;
			
		}
		int getcount() const
		{
			return count;
		}
		
};
int student::count=0;
int main()
{
	const student s1;
	cout<<s1.getcount()<<endl;
	student s2;
		cout<<s2.getcount()<<endl;
		student s3;
	cout<<s3.getcount()<<endl;
	student s4;
	cout<<s4.getcount()<<endl;

}
