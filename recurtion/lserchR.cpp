#include<iostream>
using namespace std;
void linear(int arr[],int key, int i ,int n){
    if(key == arr[i]){
        cout<<"key is found at : "<<i<<" index"<<endl;
        return;
    }
    if(i == n-1){
        cout<<"element not found"<<endl;
        return;
    }
    linear(arr,key,i+1,n);
}
int main()
{
    int arr[] = {43,1,6,33,2,345,12,4,77,5,63,};
    int n = sizeof(arr)/sizeof(int);
    int key = 8;
    int i = 0;
    linear(arr,key,i,n);
    return 0;
}