#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int height;
		int width;
	public:
		void setvalues(int h,int w);
		
		int getarea()
		{
			return height*width;
		}
};
