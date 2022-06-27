#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
	public:
		void setvalues(int f,float i)
		{
			feet=f;
			inches=i;
		}
		void showdist()
		{
			cout<<"Feet = "<<feet<<"\n";
			cout<<"inches = "<<inches<<endl;
		}
};
