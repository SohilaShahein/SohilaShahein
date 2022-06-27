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
		float getlength()
		{
			return length;
		}
		void setwidth(float w)
		{
			width=w;
		}
		float getwidth()
		{
			return width;
		}
		float getarea()
		{
			return length*width;
		}
	
};
int main()
{
	Rectangle box;
	box.setlength(40.5);
	box.setwidth(30.2);
	box.getarea();
	cout<<"Area = "<<box.getarea()<<"\n";
}
