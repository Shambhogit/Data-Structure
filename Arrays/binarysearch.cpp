#include<iostream>
using namespace std;
class bisearch{
    int arr[100];
    int size;

    public:

    void getarray(){
        cout<<"enter the size of array : ";
        cin>>size;
        cout<<"enter the element in array "<<endl;
        for(int i = 0;i<size ;i++){
            cin>>arr[i];
        }
    }

    void binearysearch(){
        cout<<"Enter the element to search : ";
        int key ;
        cin>>key;
        int start = 0;
        int end = size-1;
        int mid = (start+end)/2;
        for (int i = 0 ;i< size ;i++){
            if(arr[mid]==key){
                cout<<"Elemenet you entered is "<<key<<" found at index "<<mid+1<<endl;
                return;
            }
            if(arr[mid]>key){
                end = mid;
                mid = (start+end)/2; 
            }
            else if(arr[mid]<key){
                start = mid ;
                mid = (start+end)/2;
            }
        }
        cout<<"Element no found in array "<<endl;
    }
};
int main()
{
    bisearch a ;
    a.getarray();
    a.binearysearch();
    return 0;
}