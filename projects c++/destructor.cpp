#include<iostream>
using namespace std;

class Person{
    int id;
    public:
        Person(){
            id=0;
            cout <<"\nPerson Created : "<<id;
        }
        Person(int id):id(id){
            cout <<"\nPerson Created : "<<id;

        }

        ~ Person(){
            cout <<"\nPerson Destroyed : "<<id;

        }
};
void message(){
    Person p4 (20) , p5(200);
}
int main(){

    Person p1 , p2(10) , p3(100);
    cout<<"\nEnd Of Constructors ";
    message();
    Person p6(30) , p7(300);

}

