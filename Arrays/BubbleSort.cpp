#include<iostream>
using namespace std;

class Bobble{
    private:
    int arr[100];
    int n;
    public:
    void getarr(){
        cout<<"enter size of arr"<<endl;
        cin>>n;
        cout<<"enter element of array"<<endl;
        for(int i = 0 ;i<n;i++){
            cin>>arr[i];
        }
    } 
    void print(){
        for(int i = 0; i<n;i++){
            cout<<arr[i]<<" ";
        }
    }

    void bsort(){
        for(int i = 0;i<n;i++){
            for(int j = 1;j<n-i;j++){
                if(arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
            }
        }
        cout<<"\n\n";
        print();
    }
};
int main()
{
    Bobble b ;
    b.getarr();
    b.print();
    b.bsort();
    return 0;
}