#include<iostream>
using namespace std;
class student{
	static int count;
	public:
		student()
		{
			count++;
			
		}
		int getcount()
		{
			return count;
		}
		
};
int student::count=0;
int main()
{
	student s1,s2,s3,s4;
	cout<<s1.getcount()<<endl;
		cout<<s2.getcount()<<endl;
	cout<<s3.getcount()<<endl;
	cout<<s4.getcount()<<endl;

}
