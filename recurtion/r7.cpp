#include<iostream>
using namespace std;

int print(int x,int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
   
   int power = x*print(x,n-1);
   return power;
}
int main()
{
    cout<< print(2,9);
    return 0;
}