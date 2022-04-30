#include <iostream>
#define n NULL
using namespace std;
struct node
{
    int data;
    node *next;
};

class linklist
{
    node *head, *tail;
    int size;

public:
    linklist()
    {
        head = n;
        tail = n;
        size = 0;
    }

    void add_node(int data)
    {
        node *new_node = new node;
        new_node->data = data;
        new_node->next = n;

        if (head == n)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }

    void display()
    {
        node *temp = head;
        while (temp != n)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "END\n";
    }

    void sort()
    {
        node *temp = head;
        node *temp_next = temp->next;

        while (temp_next->next != n)
        {
         
                if (temp->data < temp_next->data)
                {
                    int a = temp->data;
                    temp->data = temp_next->data;
                    temp_next->data = a;
                    
                }
                else{
                temp = temp->next;
                temp_next = temp_next->next;
                }
        }
        display();
    }
};
int main()
{
    linklist a;
    a.add_node(23);
    a.add_node(76);
    a.add_node(20);
    a.add_node(122);
    a.add_node(65);
    a.add_node(11);
    a.display();
    a.sort();
    return 0;
}