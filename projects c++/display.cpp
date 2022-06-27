#include<iostream>
#include<string>
using namespace std;

int x=10;

void Display(string name="amr" ){
    cout <<"\nWelcome : "<<name;
}

int sum(int x , int y=30){
    return x+y;
}

int main(){
    string name;
    cout <<"Enter Name : ";
    cin>>name;
    Display(name); //yosri
  Display();//amr
  int z= sum(10,20);
  cout<<"\n"<<z<<"\t";
  cout <<sum(40);
}
