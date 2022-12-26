#include<iostream>
using namespace std; 

class Dequeue
{
    private:
    int size;
    int *arr;
    int front;
    int rear;
    public:
    Dequeue(int s)
    {
        size=s;
        arr=new int(size);
        front=-1;
        rear=-1;
    }
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return 1;
        }
        return 0;
    }
    
    bool isFull()
    {
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)))
        {
            return 1;
        }
        return 0;
    }

    void push_front(int data)
    {
        if(isFull())
        {
            cout<<"Dequeue is full"<<endl;
        }
        else if(front==-1 && rear==-1)
        {
            front=rear=0;
            arr[front]=data;
        }
        else if(front==0 && rear!=size-1)
        {
            front=size-1;
            arr[front]=data;
        }
        else
        {
            arr[--front]=data;
        }
    }
    void push_back(int data)
    {
        if(isFull())
        {
            cout<<"Dequeue is full"<<endl;
        }
        else if(front==-1 && rear==-1)
        {
            front=rear=0;
            arr[rear]=data;
        }
        else if(front!=0 && rear==size-1)
        {
            rear=0;
            arr[rear]=data;
        }
        else
        {
            arr[++rear]=data;
        }
    }
    void pop_front()
    {
        if(isEmpty())
        {
            cout<<"Dequeue is Empty"<<endl;
            return;
        }
        arr[front]=-1;
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(front!=size-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
    void pop_back()
    {
        if(isEmpty())
        {
            cout<<"Dequeue is Empty"<<endl;
            return;
        }
        arr[rear]=-1;
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(rear==0)
        {
            rear=size-1;
        }
        else
        {
            rear--;
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
    Dequeue d(5);
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);
    d.push_front(2);
    d.push_front(87);
    d.print();
    d.pop_back();
    d.print();
    d.pop_front();
    d.print();

    return 0;
}