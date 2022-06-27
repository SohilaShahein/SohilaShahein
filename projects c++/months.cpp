#include<iostream>
using namespace std;

enum Months {Jan=1 , Feb  , Mar=10 , Apr , 
             May , Jun , Jul , Aug ,
             Sep , Oct=100 , Nov , Dec};

int main(){
    Months m1=Oct;
    int x = m1;
    int y =Oct;
    cout <<Feb<<"\t"<<Dec<<"\n";
    cout <<m1<<"\t"<<x<<"\t"<<y;

    Months mo[5]={Jan , Apr , Jun , Oct , Aug};
    string mo_s[5]={"Jan" , "Apr" , "Jun" , "Oct" , "Aug"};
    for (int i = 0; i < 5; i++)
    {
        cout<<"\n"<<mo[i]<<"\t"<<mo_s[i];
    }
    
}
