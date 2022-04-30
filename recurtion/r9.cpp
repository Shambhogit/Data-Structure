#include<iostream>
using namespace std;
void printline(int n){
    if(n==0){
        return;
    }
    cout<<"* ";
    printline(n-1);
}

void piramid(int a,int n){
    if(a==0){
        return;
    }
    printline(n-a+1);
    cout<<endl;
    piramid(a-1,n);
}
int main()
{
    int n = 10;
    piramid(5,5);
    return 0;
}