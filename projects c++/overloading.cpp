#include<iostream>
using namespace std;

void disp(){
    cout <<"Hello\n";
}
void disp(string name){
    cout <<"\nHello : "<<name;
}
int disp(int x , int y){
    return x+y;
}
int main(){
    disp();
    disp("Ali");
    cout<<endl;
    cout<<disp(3,4);
    

   

}
