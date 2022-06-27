#include<iostream>
using namespace std;
class Unary{
	int width,height;
	public:
	
	
		Unary(int x,int y)
		{
			x=width;
			y=height;
		}
		int getWidth()
		{
			return width;
		}
		int getHeight()
		{
			return height;
		}
		void showData()
		{
			cout<<width<<"\t"<<height<<endl;
		}
		Unary operator+(Unary R2)
		{
			width=width+R2.width;
			height=height+R2.height;
			return *this;
			
		}
		Unary operator+=(Unary R4)
		{
			width+=width+R4.width;
			height+=height+R4.height;
			return *this;
		}
};
int main()
{

	Unary R1(5,6),R2(4,9),R4(2,6);
	R1+=R4;

	R1.showData();//7,12
	
	
}
