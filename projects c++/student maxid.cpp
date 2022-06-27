#include<iostream>
using namespace std;

class Student{
    private:
        int id;
        string name;
    public:
        void setId(int i){
            id=i;
        }    
        void setName(string n){
            name=n;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
        void setData(){
            int n ; string s;
            cout <<"Enter Id : ";
            cin>>n;
            cout <<"Enter nane : ";
            cin>>s;
            setId(n);  // id=i;
            setName(s);
        }
        void showData(){
            cout <<getId()<<"\t"<<name<<"\n";

        }
};




Student getMaxID(Student sts[] , int size){
    int max=sts[0].getId();
    int index =0;

    for (int i = 0; i < size; i++)
    {
        if(max<sts[i].getId()){
            max=sts[i].getId();
            index=i;
        }
    }
    return sts[index];
}

int main(){
    int num;
    cout <<"Enter # Stds : ";
    cin>>num;
    Student  stds[num];

    for (int i = 0; i < num; i++)
    {
        stds[i].setData();
    }
    for (int  i = 0; i < num; i++)
    {
        stds[i].showData();
    }
    
    Student st=getMaxID(stds,num);
    cout <<"Max Id Row : \n";
    st.showData();
    

    


}
