#include<iostream>
using namespace std;
int linearSearch(int arr[] ,int key, int size ){
    for(int i = 0;i<size; i++){
        if(key == arr[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    int a [] = {43,2,12,55,4,32,11,77};
    int toSearch = 77;
    int size =sizeof(a)/sizeof(int);
    cout<<linearSearch(a,toSearch,size);
    return 0;
}