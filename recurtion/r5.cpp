#include<iostream>
using namespace std;
void factorial(int n,int fact){
    if(n==0){
        cout<<fact<<endl;
        return;
    } 
    fact *=n;
    factorial(n-1,fact);
}
int main()
{
    factorial(5,1);
    return 0;
}