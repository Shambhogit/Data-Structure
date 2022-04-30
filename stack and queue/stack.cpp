#include<iostream>
#define size 10
using namespace std;

class stack {
    int top;
    int stk[size];

     bool isFull(){
        if(top == size-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    public:
    stack(){
        top = -1;
    }
   
    void push(int data){
        if(isFull()){
            cout<<"Stck is Full ( Stack overFlow) "<<endl;
        }
        else{
            top++;
            stk[top] = data;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty (Stack UnderFlow )"<<endl;
        }
        else{
            cout<<"pop Element is "<<stk[top--]<<endl;
        }
    }

    void printStk(){
        if(isEmpty()){
            cout<<"Stack is Empty Can not print stack "<<endl;
            return;
        }
        for(int i = top; i>=0;i--){
            cout<<stk[i]<<endl;
        }
    }

    int peak(){
        return stk[top];
    }
};
int main()
{
    stack s ;
    s.push(53);
    s.push(75);
    s.push(98);
    s.push(12);
    s.printStk();
    s.pop();
    s.printStk();

    return 0;
}