#include<iostream>
#define n NULL
using namespace std;

struct node {
    int data ;
    node *next; 
};

class linklist{
    private:
    int size;
    node *head,*tail;
    public:
    linklist(){
        head =n;
        tail =n;
        size = 0;
    }
    void deleteAtIndex(int index){
        node * temp = head;
        node * temp1 = temp->next;
        for(int i = 2;i<index;i++){
            temp = temp->next;
            temp1 = temp1->next;
        }
        temp->next = temp->next->next;
        free(temp1);
        
    }
    void add_node(int a){
        node *new_node = new node;
        new_node->data = a;
        new_node->next = n;

        if(head ==n){
            head = new_node;
            tail = new_node;
        }
        else{
            tail->next=new_node;
            tail = new_node;
        }
        size++;
    }
    void deleteEnd(){
        node *temp = head;
        for(int i = 2;i<size;i++){
            temp = temp->next;
        }
        tail = temp;
        temp = tail->next;
        tail->next=n;
        free(temp);
    }
    void deleteFirst(){
        node *temp = head;
        if(head == n){
            cout<<"LinkList is Empty"<<endl;
        }
        else if(head->next==n){
            free(temp);
            size--;
        }
        else{
            head = head->next;
            free(temp);
            size--;
        }
    }
    void display(){
        node * temp = head;
        while(temp!=n){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"END\n";
    }
};

int main()
{
    linklist ll ;
    ll.add_node(32);
    ll.add_node(65);
    ll.add_node(87);
    ll.add_node(88);
    ll.add_node(99);
    ll.add_node(44);
    ll.add_node(23);
    ll.add_node(376);
    ll.display();
    ll.deleteFirst();
    ll.display();
    ll.deleteEnd();
    ll.display();
    ll.deleteAtIndex(3);
    ll.display();

    return 0;
}