#include<iostream>
using namespace std;
class Counter{
	private:
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
int main()
{
	Counter C1(40),C2(20);
	++C1;            //C1.operator++();
	++C2;            //	C2.operator++();
    cout<<C1.getCount()<<endl;   //50
	cout<<C2.getCount()<<endl;//30
	C1.operator++(100);   //C1++;
	cout<<C1.getCount()<<endl;//35
	
}

