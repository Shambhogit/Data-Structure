#include<iostream>
#define n NULL
using namespace std;
struct node{
    int data;
    node *next;
};
class stackll{
    node *top;

    public:
    stackll(){
        top = n;
    } 

    bool isEmpty(){
        if(top == n){
            return true;
        }
        return false;
    }

    void push(int data){
        node *new_node = new node;
        new_node->data = data;
        new_node->next = n;

        if(top == n){
            top = new_node;
        }
        else{
            new_node->next = top;
            top = new_node;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"STACK IS EMPTY "<<endl;
            return;
        }

        node *temp = top ;
        top = top->next;
        free(temp);
    }

    void display(){
        if(isEmpty()){
            cout<<"STACK IS EMPTY"<<endl;
            return;
        }
        node *temp = top ;
        cout<<"TOP -->";
        while(temp != n){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<"END\n";
    }
};

int main()
{
    stackll a ;
    a.push(43);
    a.push(65);
    a.push(23);
    a.push(11);
    a.push(64);
    a.push(422);
    a.display();
    a.pop();
    a.display();
    return 0;
}