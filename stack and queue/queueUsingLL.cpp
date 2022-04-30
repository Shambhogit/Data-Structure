#include<iostream>
#define n NULL

using namespace std;

struct node {
    int data;
    node *next;
};

class queuell{
    node *front,*rear;
    public :

    queuell(){
        front = n;
        rear = n;
    }

    void enqueue(int data){
        node *new_node = new node;
        new_node->data = data;
        new_node->next = n;

        if(front == n){
            front = new_node;
            rear = new_node;
        }
        else{
            new_node->next = rear->next;
            rear->next = new_node;
            rear = new_node;
        }
    }

    void dequeue(){
        if(front == n){
            cout<<"QUEUE IS EMPTY"<<endl;
            return;
        }
        cout<<"element deleted is "<<front->data<<endl;
        node * temp = front;
        front = front->next;
        free(temp); 
    }  

    void display(){
        node *temp = front ;
        cout<<"FRONT | ";
        while (temp != n){
            cout<<temp->data<<" | ";
            temp = temp->next;
        }
        cout<<"REAR\n";   
    }
};
int main()
{
    queuell a ;
    a.enqueue(43);
    a.enqueue(76);
    a.enqueue(23);
    a.enqueue(12);
    a.enqueue(97);
    a.display();
    return 0;
}