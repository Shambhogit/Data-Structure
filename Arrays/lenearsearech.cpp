#include<iostream>
#define max 100
using namespace std;

class lsearch {
    int arr[max];
    int size;
    public:

    void getarray(){
        cout<<"Enter the size of array ";
        cin>>size;
        cout<<"Enter the element in array "<<endl;
        for(int i = 0;i<size;i++){
            cin>>arr[i];
        }
    } 

    void linear(){
        int key;
        cout<<"Enter the element to search ";
        cin>>key;
        for(int i = 0;i<size;i++){
            if(arr[i]==key){
                cout<<"element you entered "<<key<<" is found at index "<<i+1<<endl;
                return;
            }
        }
        cout<<"element is not avalaible in given array"<<endl;
    }
};
int main()
{
    lsearch s ;
    s.getarray();
    s.linear();
    
    return 0;
}