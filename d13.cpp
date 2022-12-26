#include<iostream>
using namespace std; 

class CirQue
{
    private:
    int size;
    int *arr;
    int front;
    int rear;
    public:
    CirQue(int size)
    {
        this->size=size;
        this->arr=new int (size);
        this->front=-1;
        this->rear=-1;
    }
    bool isFull()
    {
        if((front==0 && rear==size-1) && (rear=(front-1)%(size-1)))
        {
            return 1;
        }
        return 0;
    }
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return 1;
        }
        return 0;
    }

    void enqueue(int data)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
        }
        else if (rear==size-1 && front!=0)
        {
            rear=0;
        }
        else 
        {
            rear++;
        }
        arr[rear]=data;

    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        arr[front]=-1;
        if(front==rear)
        {
            front=rear=-1;

        }
        else if (front==size-1)
        {
            front=0;
        }
        else 
        {
            front++;
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }
};

int main()
{
    CirQue c(5);
    c.enqueue(4);
    c.enqueue(4);
    c.enqueue(4);
    c.enqueue(4);
    c.enqueue(4);
    c.dequeue();
    c.dequeue();
    c.dequeue();
    c.dequeue();
    c.dequeue();
    c.dequeue();

    

    c.print();

    
    return 0;
}