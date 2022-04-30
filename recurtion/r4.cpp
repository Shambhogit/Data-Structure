#include<iostream>
using namespace std;
void printSum(int i,int n,int sum){
    if(i==n+1){
        // sum +=i;
        cout<<sum<<endl;
        return;
    }
    sum += i;
    printSum(i+1,n,sum);
}
int main()
{
    printSum(1,10,0);
    return 0;
}