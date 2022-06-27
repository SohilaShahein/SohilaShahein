#include <iostream>
#include <cmath>
using namespace std;
int d,c=2;
 int sum;
int fun(int x)
{
    sum+=c;
    c=c+2;
    x--;
    if(x==0)
        return sum;

    fun(x);
}
int main(){
    int n;
    cin>>n;
 cout<<fun(n);
}
