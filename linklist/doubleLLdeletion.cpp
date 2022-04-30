#include<iostream>
#define n NULL
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};

class DLL{
    int size;
    node *head,*tail;

    public:

    DLL(){
        head = n;
        tail = n;
        size = 0;
    }

    void add_node(int a){
        node *new_node = new node;
        new_node->data = a;
        new_node->next = n;
        new_node->prev = n;

        if(head == n){
            head = new_node;
            tail = new_node;
        }
        else{
            new_node->next = tail->next;
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }

    void display(){
        if(head == n){
            cout<<"Link List is Empty"<<endl;
            return;
        }
        node *temp = head;
        while(temp != n){
            cout<<temp->data<<" <--> ";
            temp = temp->next; 
        }
        cout<<"END\n";
    }

    void deleteFirst(){
        if(head == n){
            cout<<"cant delete node Link List is Empty"<<endl;
        }else{
            node *temp = head;
            head->next->prev = head->prev;
            head = head->next;
            free(temp);
            size--;
        }
    }

    void deleteEnd(){
        if(head == n){
            cout<<"cant delete node Link List is Empty"<<endl;
            return;
        }
        node *temp = tail;
        tail = tail->prev;
        tail->next = tail->next->next;
        free(temp);
        size--;
    }

    void deleteAtIndex(int index){
        if(head == n){
            cout<<"Link List is empty"<<endl;
            return;
        }
        if(index == 1){
            deleteFirst();
            return;
        }
        if(index == size){
            deleteEnd();
            return;
        }
        else{
            node *temp = head;
            for(int i = 2; i<index;i++){
                temp = temp->next;
            }
            node *dtmp = temp->next;
            temp->next = temp->next->next;
            temp->next->prev = temp;
            free(dtmp);
            size--;
        }
    }
};
int main()
{
    DLL ll ;
    ll.add_node(53);
    ll.add_node(23);
    ll.add_node(5);
    ll.add_node(88);
    ll.add_node(11);
    ll.add_node(83);
    ll.add_node(43);
    ll.display();
    ll.deleteFirst();
    ll.display();
    ll.deleteEnd();
    ll.display();
    ll.deleteAtIndex(3);
    ll.display();
    return 0;
}