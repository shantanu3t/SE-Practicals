#include<bits/stdc++.h>
using namespace std; 

class node
{
    private:
    int prn;
    string name;
    node* next;
    public:
    void set_prn(int prn)
    {
        this->prn=prn;
    }
    void set_name(string name)
    {
        this->name=name;
    }
    void set_next(node *next)
    {
        this->next=next;
    }
    int get_prn()
    {
        return prn;
    }
    string get_name()
    {
        return name;
    }
    node* get_next()
    {
        return next;
    }

};

class LinkedList
{
    private:
    node* head;
    node* tail;

    public:
    friend void concatenate(LinkedList l1, LinkedList l2);

    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }

    void insertAtHead(int prn, string name)
    {
        node* newnode=new node();
        newnode->set_prn(prn);
        newnode->set_name(name);
        newnode->set_next(NULL);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            newnode->set_next(head);
            head=newnode;
        }
    }

    void insertAfterElement(int element, int prn, string name)
    {
        if(head==NULL && tail==NULL)
        {
            node* newnode= new node();
            newnode->set_prn(prn);
            newnode->set_name(name);
            newnode->set_next(NULL);
            head=newnode;
            tail=newnode;
            return;
        } 
        node* temp=head;
        while (temp->get_prn()!=element)
        {
            temp=temp->get_next();
        }
        if(temp==head)
        {
            insertAtHead(prn,name);
            return;
        }
        if(temp==tail)
        {
            insertAtTail(prn,name);
            return;
        }
        node* newnode= new node();
        newnode->set_prn(prn);
        newnode->set_name(name);
        newnode->set_next(temp->get_next());
        temp->set_next(newnode);

    }

    void insertAtTail(int prn, string name)
    {
        node* newnode=new node();
        newnode->set_prn(prn);
        newnode->set_name(name);
        newnode->set_next(NULL);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->set_next(newnode);
            tail=newnode;
        }
    }
    void deleteAtHead()
    {
        
        if(head==NULL && tail==NULL)
        {
            cout<<"Linked List is empty"<<endl;
            return;
        }
        node* temp=head;
        if(temp==tail)
        {
            head=NULL;
            tail=NULL;
        }
        head=head->get_next();
        temp->set_next(NULL);
        delete temp;
    }

    void deletebyprn(int prn)
    {
        if(head==NULL && tail==NULL)
        {
            cout<<"Linked List is empty"<<endl;
            return;
        }
        node* curr=head;
        node* prev=NULL;

        while (curr->get_prn()!=prn)
        {
            prev=curr;
            curr=curr->get_next();
        }
        if(curr==head)
        {
            deleteAtHead();
            return;
        }
        if(curr==tail)
        {
            deleteAtTail();
            return;
        }
        prev->set_next(curr->get_next());
        curr->set_next(NULL);
        delete curr;

    }

    void deleteAtTail()
    {
        
        if(head==NULL && tail==NULL)
        {
            cout<<"Linked List is empty"<<endl;
            return;
        }
        node* temp=head;
        if(temp==tail)
        {
            head=NULL;
            tail=NULL;
        }
        while (temp->get_next()!=tail)
        {
            temp=temp->get_next();
        }
        temp->set_next(NULL);
        delete tail;
        tail=temp;
    }

    void print()
    {
        node* temp=head;
        cout<<head->get_prn()<<endl;
        cout<<tail->get_prn()<<endl;
        while (temp!=NULL)
        {
            cout<<"Name :"<<temp->get_name()<<endl;
            cout<<"PRN :"<<temp->get_prn()<<endl;
            temp=temp->get_next();
        }  
    }
    int lengthofLL()
    {
        node* temp=head;
        int count=0;
        while (temp!=NULL)
        {
            count++;
            temp=temp->get_next();
        } 
        return count; 
    }
};
void concatenate(LinkedList l1, LinkedList l2)
{   
    l1.tail->set_next(l2.head);
} 


int main()
{
    LinkedList Link1, Link2;
    int choice=0;
    int prn=0,temp=0;
    string name;
    while (choice!=15)
    {
            cout
        <<"\n***********Menu**********"<<endl
        <<"1. Add president to Link1  "<<endl
        <<"2. Add vise president to Link1  "<<endl
        <<"3. Add member after given PRN to Link1  "<<endl
        <<"4. Print Link1"<<endl
        <<"5. Delete president of Link1  "<<endl
        <<"6. Delete vise president of Link1  "<<endl
        <<"7. Delete member of Link1 using PRN No.  "<<endl
        <<"8. Add president to Link2  "<<endl
        <<"9. Add vise president to Link2  "<<endl
        <<"10. Add member after given PRN to Link2  "<<endl
        <<"11. Print Link1"<<endl
        <<"12. Delete president of Link2  "<<endl
        <<"13. Delete vise president of Link2  "<<endl
        <<"14. Delete member of Link2 using PRN No.  "<<endl
        <<"15. Cocatenate Link1 and Link2"<<endl
        <<"16. Break"<<endl;
        cout<<"\nEnter your choice :";cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter the name of president: ";cin>>name;
                cout<<"Enter the prn of president: ";cin>>prn;
                Link1.insertAtHead(prn, name);
                break;
            case 2:
                cout<<"Enter the name of vise president: ";cin>>name;
                cout<<"Enter the prn of vise president: ";cin>>prn;
                Link1.insertAtTail(prn, name);
                break;
            case 3:
                cout<<"Enter the name of member: ";cin>>name;
                cout<<"Enter the prn of member: ";cin>>prn;
                cout<<"Enter the prn number after that you want to add this member: ";cin>>temp;
                Link1.insertAfterElement(temp, prn, name);
                break;
            case 4:
                Link1.print();
                break;
            case 5:
                Link1.deleteAtHead();
                break;
            case 6:
                Link1.deleteAtTail();
                break;
            case 7:
                cout<<"Enter the prn number :";cin>>temp;
                Link1.deletebyprn(temp);
                break;
           case 8:
                cout<<"Enter the name of president: ";cin>>name;
                cout<<"Enter the prn of president: ";cin>>prn;
                Link2.insertAtHead(prn, name);
                break;
            case 9:
                cout<<"Enter the name of vise president: ";cin>>name;
                cout<<"Enter the prn of vise president: ";cin>>prn;
                Link2.insertAtTail(prn, name);
                break;
            case 10:
                cout<<"Enter the name of member: ";cin>>name;
                cout<<"Enter the prn of member: ";cin>>prn;
                cout<<"Enter the prn number after that you want to add this member: ";cin>>temp;
                Link2.insertAfterElement(temp, prn, name);
                break;
            case 11:
                Link2.print();
                break;
            case 12:
                Link2.deleteAtHead();
                break;
            case 13:
                Link2.deleteAtTail();
                break;
            case 14:
                cout<<"Enter the prn number :";cin>>temp;
                Link2.deletebyprn(temp);
                break;
            case 15:
                concatenate(Link1,Link2);
                break;
            case 16:
                break;
            default:
                cout<<"Invalid"<<endl;
                break;
        }
    }

    
    

    
    return 0;
}