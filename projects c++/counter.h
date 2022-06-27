#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
	public:
		int getcount()
		{
			return count;
		}
		counter(int c):count(c)
		{
			
		}
		counter operator ++(int)
		{
			count++;
			return counter(count);
		}
	
};
