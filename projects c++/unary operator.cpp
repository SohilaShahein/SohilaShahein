#include<iostream>
using namespace std;
class Unary{
	int x,y,z;
	public:
		Unary()
		{
			
		}
		Unary(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		Unary(int x,int y,int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		Unary operator+=(Unary k)
		{
			x+=k.x;
			y+=k.y;
			return *this;
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
		Unary operator-()
		{
			x=-x;
			y=-y;
			return *this;
		}
		bool operator==(Unary b)
		{
			return(x==b.x&&y==b.y&&z==b.z);
		}
		void show()
		{
			cout<<x<<"\t"<<y<<endl;
		}
		
};
int main()
{
	Unary v(10,20),k(30,15),a(10,20,30),b(10,20,30);
	v+=k;//v.operator+=(k);
	v.show();
    v=-v;	//v.operator-();
	v.show();
	v.operator-();
	v.show();
	v++;    //41,36
	v.show();
	++v;    //42,37
	v.show();
	v++;
	++v;
	v.show();//44,39
	if(a==b)
	cout<<"Equal";
	else
	cout<<"Not Equal";
	
	/*v++;
	v.show();//11,21
    ++v;
    v.show();//12,22
    k=v++;
    k.show(); //13,23
    */
       

	
}
