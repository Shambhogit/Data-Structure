#include<iostream>
using namespace std;

int a = 1;
void print(int n){
    if(n==0){
        return;
    }
    cout<<a<<endl;
    a++;
    print(n-1);
}
int main()
{
    print(5);
    return 0;
}