#include<iostream>
using namespace std;

int sum(int k , int y){
    return k+y;
}
void disp(string x ){
    cout <<"\nWelcome : "<<x;
    
}
int main(){
     cout <<sum(3,3)<<endl;
     int x=sum(3,10);
    cout <<x<<endl;
    disp("Ali");
}
