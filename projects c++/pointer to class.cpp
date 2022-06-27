#include<iostream>
using namespace std;
class Rectangle
{
	int *width,*height;
	public:
		Rectangle(int a,int b)
		{
			width=new int;
			height=new int;
			*width=a;
			*height=b;
			
		}
		~Rectangle()
		{
			delete width;
			delete height;
		}
		int area()
		{
			return (*width * *height);
		}
	
};
int main()
{
	Rectangle r1(5,6);
	cout<<r1.area()<<endl;
}
