#include<iostream>
using namespace std;

int main(){

    int r , c; 
    cout <<"Enter Rows , Columns : ";
    cin>>r>>c;
    int arr[r][c];
    for (int i = 0; i < r; i++){
        cout <<"Enter Row # "<<i<<"\n";
        for (int j = 0; j < c; j++)
        {
            cout <<"Enter Ele["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
        
    }
     for (int i = 0; i < r; i++){
         
         cout <<"\n";
         int sum=0;
        for (int j = 0; j < c; j++)
        {
            cout <<arr[i][j]<<"\t";
            sum+=arr[i][j];
        }
        cout <<"Sum = "<<sum <<"\tAVG = "<<sum/c;
    }
    
}
