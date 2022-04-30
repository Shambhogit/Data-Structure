#include<iostream>
#define n NULL
using namespace std;
struct node {
    int data;
    node *next;
};

class CLL{
    int size;
    node *head,*tail;
    public:
    CLL (){
        head = n;
        tail = n;
        size = 0;
    }
    void add_node(int a){
        node *new_node = new node;
        new_node->data = a;
        new_node->next = n;
        if(head == n){
            head = new_node;
            tail = new_node;
            tail->next = head;
        }
        else{
            new_node->next = tail->next;
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }

    void deleteFirst(){
        if(head == n){
            cout<<"Link List is empty"<<endl;
            return;
        }
        node *temp = head;
        head = head->next;
        tail->next = head;
        free(temp);
        size--;
    }

    void deleteLast(){
        if(head == n){
            cout<<"link list is empty"<<endl;
            return;
        }
        node *temp = head;
        for(int i = 2;i<size; i++){
            temp = temp->next;
        }
        node *tmp = temp->next;
        tail = temp;
        tail->next = head;
        free(tmp);
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
            deleteLast();
            return;
        }
        else{
            node *temp = head;
            for(int i = 2; i<index;i++){
                temp = temp->next;
            }
            node *tmp = temp->next;
            temp->next = tmp->next;
            free(tmp);
            size--;
        }
    }

    void display(){
        node *temp = head;
        do{
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }while(temp != head);
        cout<<"HEAD\n"<<endl;
    }
    
};
int main()
{
    CLL ll;
    ll.add_node(43);
    ll.add_node(76);
    ll.add_node(12);
    ll.add_node(98);
    ll.add_node(53);
    ll.add_node(72);
    ll.display();
    ll.deleteFirst();
    ll.display();
    ll.deleteLast();
    ll.display();
    ll.deleteAtIndex(3);
    ll.display();
    return 0;
}