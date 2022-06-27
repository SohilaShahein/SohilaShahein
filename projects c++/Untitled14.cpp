#include<iostream>
using namespace std;


int getSize(){
    int size;
    cout <<"Enter Size : ";
    cin>>size;
    return size;
}
void getArray(int a[] , int h){
    for (int i = 0; i < h; i++)
    {
       cout <<"Enter Arr["<<i<<"]: ";
       cin>>a[i];
    }   
}

void showArray(int x[] , int k ){
    for(int z =0 ; z< k ; z++){
        cout <<x[z]<<" ";
    }
}
int main(){
    int size=getSize();
	int arr[size]; 
    getArray(arr,size);
    showArray(arr,size);


}
