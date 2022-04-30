#include <iostream>
#define n NULL
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
class DLL
{
private:
    int size;
    node *head, *tail;

public:
    DLL()
    {
        head = n;
        tail = n;
        size = 0;
    }

    void insertFirst(int a)
    {
        node *new_node = new node;
        new_node->data = a;
        new_node->next = n;
        new_node->prev = n;

        if (head == n)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            new_node->prev = head->prev;
            new_node->next = head;
            head = new_node;
        }
        size++;
    }
    void insertEnd(int a)
    {
        if (head == n)
        {
            insertFirst(a);
        }
        else
        {
            node *new_node = new node;
            new_node->data = a;
            new_node->next = n;
            new_node->prev = n;
            new_node->next = tail->next;
            tail->next = new_node;
            new_node->prev = tail;
            size++;
        }
    }
    void insertAtIndex(int a, int index)
    {
        if(index >size || index < 0){
            cout<<"index is out of bound"<<endl;
            return;
        }
        if (index == 1)
        {
            insertFirst(a);
        }
        else if (index == size)
        {
            insertEnd(a);
        }
        else 
        {
            node *temp = head;
            for (int i = 2; i < index; i++)
            {
                temp = temp->next;
            }
            node *new_node = new node;
            new_node->data = a;
            new_node->next = n;
            new_node->prev = n;

            new_node->next = temp->next;
            temp->next->prev = new_node;
            temp->next = new_node;
            new_node->prev = temp;
            size++;
        }
    }
    void display()
    {
        if(head == n){
            cout<<"link list is empty"<<endl;
            return;
        }
        node *temp = head;
        while (temp != n)
        {
            cout << temp->data << " <--> ";
            temp = temp->next;
        }
        cout << "END\n";
    }
};
int main()
{
    DLL ll;
    ll.insertFirst(43);
    ll.insertFirst(12);
    ll.insertFirst(66);
    ll.insertFirst(34);
    ll.insertFirst(475);
    ll.display();
    ll.insertEnd(1000);
    ll.display();
    ll.insertAtIndex(633,3);
    ll.display();
    return 0;
}