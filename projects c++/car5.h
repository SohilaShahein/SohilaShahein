#include<iostream>
using namespace std;
class car
{
	private:
		int model;
		static int count;
	public:
		int getcount()
		{
			return count;
		}
		car(int m):model(m)
		{
			count++;
		}
};
