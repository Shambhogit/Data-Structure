#include<iostream>
#include<string>
#define n NULL
using namespace std;

struct node {
    string name;
    int roll;
    long long phone;
    node *next;
};

class datalink{
    node *start,*end;
    int size;
    public:

    datalink(){
        start = n;
        end = n;
        size = 0;
    }

    void add_data () {
        char ch;
        do{
            
        string a;
        int b;
        long long  p;
        cout<<"\nEnter your name : ";
        cin>>a;
        cout<<"Enter your Roll Num : ";
        cin>>b;
        cout<<"Enter your Phone Number : ";
        cin>>p;

        node *new_node = new node ;
        new_node->name = a;
        new_node->roll = b;
        new_node->phone = p;
        new_node->next = n;

        if(start == n){
            start = new_node;
            end = new_node;
        }
        else{
            end->next = new_node;
            end = new_node;
        }
            cout<<"do you want to insert more data press (y || Y)"<<endl;
            cin>>ch;
        }while (ch == 'y'||ch=='Y');
       
        
    }

    void print(){
        node *temp = start;
        cout<<"\n";
        while(temp != n){
            cout<<"[ "<<temp->name<<" | "<<temp->roll<<" | "<<temp->phone<<" ]"<<"-->";
            temp = temp->next;
        }
        cout<<"END\n";
    }
};
int main()
{
    datalink a;
    a.add_data();
    a.print();
    return 0;
}