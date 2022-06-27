#include<iostream>
using namespace std;
class rectangle
{
	private:
		float length;
		float width;
	public:
		float getlength();
		float getwidth();
		
		
		rectangle():length(0),width(0)
		{
			cout<<length*width<<"\n";
		}
		rectangle(float l,float w):length(l),width(w)
		{
			
			
			cout<<length*width<<"\n";
			}

			
		
};

