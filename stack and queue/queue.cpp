#include <iostream>
#define size 10
using namespace std;

class queue
{
    int que[size];
    int front, rear;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int data)
    {
        if (rear == size - 1)
        {
            cout << "Queue is FULL" << endl;
            return;
        }
        if (front == -1)
        {
            front++;
            que[++rear] = data;
        }
        else
        {
            que[++rear] = data;
        }
    }

    void printQueue()
    {
        if (front == -1)
        {
            cout << "There is no element in queue" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << que[i] << " | ";
        }
        cout << "\n";
    }

    void dequeue()
    {
        if(front == -1){
            cout<<"QUEUE is Empty"<<endl;
            return;
        }
        if (front == rear)
        {
            cout << "DEQUEUE ELEMENT is " << que[rear] << endl;
            front = rear = -1;
            return;
        }
        else{
            cout<<"element is deleted "<<que[front]<<endl;
            for(int i = front ;i<=rear;i++){
                que[i] = que[i+1];
            }
            rear--;
        }
    }
};
int main()
{
    queue q;
    q.enqueue(54);
    q.enqueue(23);
    q.enqueue(65);
    q.enqueue(11);
    q.printQueue();
    q.dequeue();
    q.printQueue();
    q.dequeue();
    q.printQueue();

    return 0;
}