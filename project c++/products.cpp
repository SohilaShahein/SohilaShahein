#include<iostream>
using namespace std;
#include"Product(baseclass).h"
#include"refrigerated meat.h"
#include"Milk.h"
#include"biscuit.h"
int main()
{
	int x,y,n;
	cout<<"Enter amount of milk be created: ";
	cin>>x;
	Milk m1[x];
	cout<<"Enter number of biscuits be created: ";
	cin>>y;
    biscuits b1[y];
	cout<<"Enter amount of meat be created: ";
	cin>>n;
	meat ma[n];
	
	
   int z;
   vaild:
   cout<<"enter number: "<<"\n"<<"enter 1 for milk: \n"<<"enter 2 for biscucitst:\n"<<"enter 3 for meat\n";
   cin>>z;
   switch (z){
   	case 1:
   		for(int i=0;i<x;i++)
   		{
   			m1[i].displayMilk();
		   }
		   break ;
	case 2:
		for(int i=0;i<y;i++){
			b1[i].displayBiscuit();
			/*cout<<b1[i].getCount()<<"\t";
			cout<<b1[i].gettype()<<"\t";*/
		
		}
		break;
    case 3:
    	for(int i=0;i<y;i++){
    		ma[i].displayMeat();
		}
		break;
		default:
			goto vaild;
	
   }
   
   
   	
   
   
   
	
	
		
	}

		
	
	

