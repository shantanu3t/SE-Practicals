#include<bits/stdc++.h>
using namespace std; 

class node
{
    private:
    int roll;
    node* next;
    public:
    void set_roll(int roll)
    {
        this->roll=roll;
    }
    void set_next(node *next)
    {
        this->next=next;
    }
    int get_roll()
    {
        return roll;
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

    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    void insert(int roll)
    {
        node* newnode=new node();
        newnode->set_roll(roll);
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

    void print()
    {
        node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->get_roll()<<" ";
            temp=temp->get_next();
        }  
        cout<<endl;
    }
    void Likeboth(LinkedList l1, LinkedList l2)
    {
        head=tail=NULL;
        node* temp=l1.head;
        while (temp!=NULL)
        {
            node* temp2=l2.head;
            while (temp2!=NULL)
            {
                if(temp->get_roll()==temp2->get_roll())
                {
                    insert(temp->get_roll());
                    break;
                }
                temp2=temp2->get_next();
            }
            temp=temp->get_next();

        }

    }
    void LikeEitherOneNotBoth(LinkedList l1, LinkedList l2)
    {
        node* temp=l1.head;
        while (temp!=NULL)
        {
            node* temp2=l2.head;
            bool flag=false;
            while (temp2!=NULL)
            {
                if(temp->get_roll()==temp2->get_roll())
                    flag=true;
                temp2=temp2->get_next();
            }
            if(!flag)
            {
                insert(temp->get_roll());
            }
            temp=temp->get_next();
        }
        temp=l2.head;
        while (temp!=NULL)
        {
            node* temp2=l1.head;
            bool flag=false;
            while (temp2!=NULL)
            {
                if(temp->get_roll()==temp2->get_roll())
                    flag=true;
                temp2=temp2->get_next();
            }
            if(!flag)
            {
                insert(temp->get_roll());
            }
            temp=temp->get_next();
        }

       
        
        
    }

    void neithernor(LinkedList l1, LinkedList l2, int n)
    {
        head=tail=NULL;
        for (int i = 1; i <= n; i++)
        {
            bool flag=false;

            node* temp=l1.head;
            while (temp!=NULL)
            {
                if(i==(temp->get_roll()))
                {
                    flag=true;
                    break;
                }
                temp=temp->get_next();
            }
            node* temp1=l2.head;
            while (temp1!=NULL)
            {
                if(i==(temp1->get_roll()))
                {
                    flag=true;
                    break;
                }
                temp1=temp1->get_next();
            }
        
            if(flag==false)
            {
                insert(i);
            }
        }
    }

};






int main()
{
    LinkedList Link1, Link2, Link3, Link4, Link5;
    Link1.insert(5);
    Link1.insert(4);
    Link1.insert(3);
    Link1.insert(2);
    Link2.insert(5);
    Link2.insert(2);
    Link2.insert(9);
    Link2.insert(8);
    int choice=0;
    int roll;
    while (choice!=8)
    {
            cout
        <<"\n***********Menu**********"<<endl
        <<"1. Add Group A  "<<endl
        <<"2. Add Group B  "<<endl
        <<"3. Print Group A  "<<endl
        <<"4. Print Group B  "<<endl
        <<"5. Set of students who like both vanilla and butterscotch"<<endl
        <<"6. Set of students who like either vanilla or butterscotch or not both"<<endl
        <<"7. Number of students who like neither vanilla nor butterscotch"<<endl
        <<"8. Break"<<endl;
        cout<<"\nEnter your choice :";cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter the Roll No. :";cin>>roll;
                Link1.insert(roll);
                break;
            case 2:
                cout<<"Enter the Roll No. :";cin>>roll;
                Link2.insert(roll);
                break;
            case 3:
                Link1.print();
                break;
            case 4:
                Link2.print();
                break;
            case 5:
                Link3.Likeboth(Link1,Link2);
                Link3.print();
                break;
            case 6:
                Link4.LikeEitherOneNotBoth(Link1,Link2);
                Link4.print();
                break;
                
            case 7:
                cout<<"Enter the last Roll No :";cin>>roll;
                Link5.neithernor(Link1,Link2,roll);
                Link5.print();
                break;
            
            case 8:
                break;
                
            default:
                cout<<"Invalid"<<endl;
                break;
        }
    }

    
    

    
    return 0;
}