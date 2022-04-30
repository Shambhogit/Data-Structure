#include<iostream>
using namespace std;
void fibo(int n1,int n2,int n){
    if(n == 2){
        return;
    }
    int a ;
    a = n1+n2;
    cout<<a<<endl;
    n1 = n2;
    n2 = a;
    fibo(n1,n2,n-1);
}
int main()
{
    cout<<0<<endl;
    cout<<1<<endl;
    fibo(0,1,10);
    return 0;
}