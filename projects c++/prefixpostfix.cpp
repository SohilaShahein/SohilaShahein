#include<iostream>
using namespace std;
class Unary {
    int id ;
    public:
    Unary():id(0){}
    Unary(int id):id(id){}
    void setId(int id){
        this->id=id;
    }
    int getId(){
        return id;
    }

    void operator++(){
        cout <<"Prefix\n";
        ++id;
    }
    void operator++(int){
        cout <<"PostFix\n";
        id++;
    }
    void operator-(){
        id=-id;
    }
};
int main(){
     
 Unary u1 , u2 , u3(10);
 ++u1;//1
 u1.operator++(); //2
 -u1; //-2
 u1++;//-1
 u3.operator++(10);//11
 
 cout <<u1.getId();//-1
 u3++;//12
 cout <<u3.getId();//12
}



