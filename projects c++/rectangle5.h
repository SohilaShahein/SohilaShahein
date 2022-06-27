#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length;
		float width;
	public:
		void setlength(float l)
		{
			length=l;
		}
		void setwidth(float w)
		{
			width=w;
		}
		void print()
		{
			cout<<"The length of This Rectangle is "<<length<<"\n";
			cout<<"The width of This Rectangle is "<<width<<"\n";
		}
		Rectangle(float l,float w):length(l),width(w)
		{
			
		}
		Rectangle add(Rectangle r1)
		{
			length=r1.length+length;
			width=r1.width+width;
			return *this;
		}
};
