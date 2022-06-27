#include<iostream>
using namespace std;
class Unary{
	int width,height;
	public:
		Unary()
		{
		}
	
	
		Unary(int width,int height)
		{
			this->width=width;
			this->height=height;
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
			Unary R3;
			
			R3.width=width+R2.width;
			R3.height=height+R2.height;
			return R3;
			
		}
		Unary operator+=(Unary R4)
		{
			width+=R4.width;
			height+=R4.height;
			return *this;
		}
};
int main()
{

	Unary R1(5,6),R2(4,9),R4(2,6);
	R2.operator+=(R1);
	R2.showData();//9,15
	Unary R3=R1.operator+(R2);
	R3.showData();//14,21
	
	
}
