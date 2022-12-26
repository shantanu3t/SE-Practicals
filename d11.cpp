// Queue using linked list
#include<iostream>
using namespace std; 

class node
{
    private:
    int data; 
    node* next;
    public:
  
    void set_data(int data)
    {
        this->data=data;
    }
    void set_next(node* next)
    {
        this->next=next;
    }
    int get_data()
    {
        return data;
    }
    node* get_next()
    {
        return next;
    }
};
class QUEUE
{
    private:
    int s;
    int count;
    node* front;
    node* rear;
    public:
    QUEUE(int size)
    {
        this->s=size;
        this->front=NULL;
        this->rear=NULL;
        this->count=0;

    }
    bool isFull()
    {
        if(count>=s)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if(front==NULL && rear==NULL)
        {
            return true;
        }
        return false;
    }
    void enqueue(int data)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
        }
        else if(front==NULL && rear==NULL)
        {
            node* newnode=new node();
            newnode->set_data(data);
            newnode->set_next(NULL);
            front=rear=newnode;
            count++;
        }
        else
        {
            node* newnode=new node();
            newnode->set_data(data);
            newnode->set_next(NULL);
            rear->set_next(newnode);
            rear=newnode;
            count++;
        }
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear)
        {
            front=rear=NULL;
            count--;
        }
        else
        {
            node* temp=front;
            front=front->get_next();
            temp->set_next(NULL);
            delete temp;
            count--;
        }
    }
    void display()
    {
        node* temp=front;
        while (temp!=NULL)
        {
            cout<<temp->get_data()<<"  ";
            temp=temp->get_next();
        }cout<<endl;
        
    }
};

int main()
{
    QUEUE q(5);
    q.dequeue();
    q.enqueue(32);
    q.enqueue(32);
    q.enqueue(32);
    q.enqueue(32);
    q.enqueue(32);
    q.enqueue(32);
    q.dequeue();
    q.display();
    return 0;
}

// #include<iostream>
// using namespace std; 

// class QUEUE
// {
//     private:
//     int size;
//     int *arr;
//     int front;
//     int rear;
//     public:
//     QUEUE(int size)
//     {
//         this->size=size;
//         this->arr=new int[size];
//         this->front=-1;
//         this->rear=-1;
//     }
//     bool isFull()
//     {
//         if(rear==size-1)
//         {
//             return 1;
//         }
//         return 0;
//     }
//     bool isEmpty()
//     {
//         if(rear==-1 && front==-1) 
//         {
//             return 1;
//         }
//         return 0;
//     }

//     void enqueue(int data)
//     {
//         if(isFull())
//         {
//             cout<<"Queue is Full"<<endl;
//         }
//         else if(front==-1 && rear==-1)
//         {
//             front=rear=0;
//             arr[rear]=data;
//         }
//         else
//         {
//             arr[++rear]=data;
//         }
//     }
//     void dequeue()
//     {
//         if(isEmpty())
//         {
//             cout<<"Queue is empty"<<endl;
//         }
//         else if(front==rear)
//         {
//             rear=front=-1;
//         }
//         else
//         {
//             front++;
//         }
//     }
//     void display()
//     {
//         for (int i = front; i <= rear; i++)
//         {
//             cout<<arr[rear]<<"  ";
//         }cout<<endl;
        
//     }

// };

// int main()
// {
//     QUEUE q(5);
//     q.dequeue();
//     q.enqueue(32);
//     q.enqueue(32);
//     q.enqueue(32);
//     q.enqueue(32);
//     q.enqueue(32);
//     q.enqueue(32);
//     q.dequeue();
//     q.dequeue();
//     q.display();
//     return 0;
// }