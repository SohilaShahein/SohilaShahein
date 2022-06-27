#include<iostream>
using namespace std;
class Unary
{
	int x,y;
	public:
		Unary(int x,int y)
		{
			this->x=x;
			this->y=y;
			
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
		void showData()
		{
			cout<<x<<"\t"<<y<<endl;
			
		}
		Unary operator++(int)
		{
			x++;
			y++;
			return *this;
		}
		Unary operator++()
		{
			++x;
			++y;
			return *this;
		}
	
};
int main()
{
	Unary b(5,6);
	b.operator++();//6,7 //++b;
	b.showData();

	b.operator++();//7,8//b++;
	b.showData();
	
}
