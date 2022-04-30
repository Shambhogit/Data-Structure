#include<iostream>
#define n NULL
using namespace std;

struct node {
    int data;
    node *next;
};
class CircularLinkList{
    int size;
    node *head,*tail;
    public:

    CircularLinkList(){
        size = 0;
        head = n;
        tail = n;
    }

    void insertFirst(int a){
        node *new_node = new node ;
        new_node->data = a;
        new_node->next = n;

        if(head == n){
            head = new_node;
            tail = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
            tail->next = head;
        }
        size++;
    }

    void insertEnd(int a){
        node *new_node = new node;
        new_node->data = a;
        new_node->next = n;
        if(head == n){
            insertFirst(a);
        }
        else{
            new_node->next = tail->next;
            tail->next = new_node;
            tail = new_node;
            size++;
        }
    }

    void insertAtIndex(int a,int index){
        node *new_node = new node;
        new_node->data = a;
        new_node->next = n;
        if(index == 1){
            insertFirst(a);
        }else if(index == size){
            insertEnd(a);
        }
        else{
            node *temp = head;
            for(int i = 2;i<index;i++){
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;
            size++;
        }
    }
    void display(){
        node *temp = head;
        do{
            cout<<temp->data<<"->";
            temp = temp->next; 
        }while(temp!= head);
        cout<<"HEAD\n";
    }
};

int main()
{
    CircularLinkList ll ;
    ll.insertFirst(53);
    ll.insertFirst(22);
    ll.insertFirst(83);
    ll.display();
    ll.insertEnd(555);
    ll.display();
    ll.insertAtIndex(1000,3);
    ll.display();
    return 0;
}