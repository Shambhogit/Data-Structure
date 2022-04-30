#include<iostream>
using namespace std;

class selection{
    int arr[100];
    int n;
    public:
    void getArr(){
        cout<<"Enter the size of array";
        cin>>n;
        cout<<"Enter element of array "<<endl;
        for(int i = 0 ;i<n;i++){
            cin>>arr[i];
        }
    }
    void display(){
        cout<<"\n elements in array is "<<endl;
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<"  ";
        }
    }

    void ssort(){
        
        for(int i = 0;i<n;i++){
            int maxel = 0;
            int maxind = n-i-1;
            for(int j = 1;j<n-i;j++){
                if(arr[j]>arr[maxel]){
                    maxel = j;
                }
            }
            int temp = arr[maxel];
            arr[maxel] = arr[maxind];
            arr[maxind] = temp;
             display();
        }

    } 
};
int main()
{
    selection s ;
    s.getArr();
    s.display();
    s.ssort();  
    return 0;
}