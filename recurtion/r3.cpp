#include<iostream>
using namespace std;
void sumnum(int n,int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sumnum(n-1,sum+n);
}
int main()
{
    sumnum(10,0);
    return 0;
}