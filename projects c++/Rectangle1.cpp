#include"Rectangle1.h"
void rectangle::setlength(float l)
{
	length=l;
}
void rectangle::setwidth(float w)
{
	width=w;
}
float rectangle::getlength()
{
	return length;
}
float rectangle::getwidth()
{
	return width;
}
int main()
{
	rectangle r1;
	r1.setlength(30);
	r1.setwidth(10);
	r1.getlength();
	r1.getwidth();
	cout<<"The Area of Rectangle is "<<	r1.getlength() * r1.getwidth()<<"\n";
 

}

