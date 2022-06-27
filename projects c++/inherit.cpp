#include<iostream>
using namespace std;
class Counter{
	protected:
		unsigned int count;
	public:
		Counter():count(0)
		{
		}
		Counter(int c):count(c)
		{
			
		}
		void operator++()   //prefix
		{
			count+=10;    //count=count+10
		}
		void operator++(int) 
		        //postfix
				{
					count-=15;
				}
				
		        
		unsigned int getCount()
		{
			return count;
		}
};
class countDn : public Counter
{
	public:
	int operator--()
	{
		return --count;
	}
};
int main()
{
	
	countDn c1;
	++c1;//10
	++c1;//20
	cout<<c1.operator--()<<endl;//19
}



