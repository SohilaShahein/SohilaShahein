#include<iostream>
using namespace std;
struct Person{
    int id , level;
    float Per;
    string name , dept;
    int grades[4];

    void getData(){
        cout <<"Enter Id : ";
        cin>>id;
        cout <<"Enter Name : ";
        cin>>name;
        cout <<"Enter Level : ";
        cin>>level;
        cout <<"Enter Dept : ";
        cin>>dept;
        float sum=0;
        for (int i = 0; i < 4; i++)
        {
            cout <<"Enter Degree # "<<(i+1)<<" : ";
            cin>>grades[i];
            sum+=grades[i];
        }
        float per=sum*100/400;
    }

    void showData(){
       cout <<id<<"\t"<<name<<"\t"<<dept<<"\t"<<level<<"\n";
    }
};
void showData(Person p){
    
    cout <<p.id<<"\t"<<p.name<<"\t"<<p.dept<<"\t"<<p.level<<"\n";

}
int main(){
    Person p , p1;
    p.getData();
    p1.getData();

    p.showData();
    p1.showData();
    showData(p1);    


    
}
