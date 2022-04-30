#include<iostream>
#define size 100
#define f(i,n) for(int i = 0;i<n;i++)
#define fi(index) for(int i = n;i>=index;i--)
#define fd(index) for(int i = index;i<n;i++)

using namespace std;

class Array{
    protected:    
    int arr[size];
    int n; 

    public:
    void getArray(){
        cout<<"Enter the size of array : ";
        cin>>n;
        cout<<"Enter "<<n<<" elements of array "<<endl;
        f(i,n){
            cin>>arr[i];
        }
    }

    void printArray(){
        cout<<"\nElement in array are"<<endl;
        f(i,n){
            cout<<arr[i]<<"  ";
        }
    }
};

class arrayOpration : public Array{
    public:

    void insertion(){

        cout<<"\nEnter data to insert : ";
        int data ;
        cin>>data;
        cout<<"\nEnter Index at which you want to Insert : ";
        int index;
        cin>>index;

        if(index > n || index < 0){
            cout<<"\nIndex is out of Bound "<<endl;
            return;
        }

        fi(index){
            arr[i+1] = arr[i];
        }
        arr[index]=data;
        n++;
    }

    void deletion(){
        cout<<"\nenter index of element to delete : ";
        int index;
        cin>>index;
        
        if(index > n || index < 0){
            cout<<"\nIndex is out of Bound"<<endl;
            return;
        }
        fd(index){
            arr[i] = arr[i+1]; 
        }
        n--;
    }

};
int main()
{
    arrayOpration a1 ;
    a1.getArray();
    a1.printArray();
    a1.insertion();
    a1.printArray();
    a1.deletion();
    a1.printArray();

    return 0;
}