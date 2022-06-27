#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
	public:
		int incr_count()
		{
			count++;
		}
		int getcount()
		{
			return count;
		}
		counter():count(0)
		{
			
		}
};
