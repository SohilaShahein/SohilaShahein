#include<iostream>
using namespace std;
int x= 200;  // Global 
void fun1(){
    int x=10;  // Local 
    x++;       //11
}
void fun2(){
    x+=10;    //x=x+10
    cout <<x<<endl;   //210
}
void fun3(){
    int y =10 ; 
    // y can be used in this function Only(Local variable)
    cout <<++x<<endl;    //211
}
void fun4(){
    x=30;
    cout<<x<<"\n";
}
int main(){
    fun2();    //210
    fun3();    //211
    fun4();    //30
    fun2();    //40
}
