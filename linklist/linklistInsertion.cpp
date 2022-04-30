#include<iostream>
using namespace std;
struct node {
    int data;
    node *next;
};

class linklist{
    private:
        node *head,*tail;
        int size;
    public:
        linklist(){
            head = NULL;
            tail = NULL;
            size = 0;
        }
    void insertFirst(int a){
        node *new_node = new node;
        new_node->data = a;
        new_node->next = NULL;
        if(head == NULL){
            head = new_node;
            tail = new_node;
        }
        else{
            new_node->next = head;
            head = new_node;
        }
        size++;
    }

    void insertEnd(int a){
        node *new_node = new node;
        new_node->data = a;
        new_node->next = NULL;
        if(head == NULL){
            insertFirst(a);
        }
        else{
            tail->next = new_node;
            tail = new_node;
            size++;
        }

    }

    void insertAtIndex(int a,int index){
        if(index == 1){
            insertFirst(a);
        }
        else if(index == size){
            insertEnd(a);
        }
        else{
            node *new_node = new node;
            new_node->data = a;
            new_node->next=NULL;
            node *temp = head;
            for(int i = 1;i<index-1;i++){
                temp = temp->next;
            }
            new_node->next=temp->next;
            temp->next = new_node;
            size++;
        }
    }
    void display(){
        node *temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<"END\n";
        
    }
};

int main()
{
    linklist ll ;
    
    ll.insertFirst(34);
    ll.insertFirst(43);
    ll.insertFirst(77);
    ll.insertFirst(47);
    ll.display();
    ll.insertEnd(593);
    ll.display();
    ll.insertAtIndex(111,3);
    ll.display();
    return 0;
}