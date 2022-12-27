#include<iostream> 
using namespace std;
const int MAX=20;
class Stack
{
char expr[MAX];
int top;
public:
 Stack()
{
top=-1;
}
void push(char ch);
char pop();
bool isEmpty();
bool isFull();
void display();
void checkParenthesis();
};
bool Stack::isEmpty()
{
if(top==-1)
 return 1;
else return 0;
}
bool Stack::isFull()
{
if(top==MAX-1)
 return 1;
else
return 0;
}
void Stack::display()
{
if(isEmpty()==1)
 cout<<"\nStack is Empty";
else
{
for(int i=0;i<=top;i++)
{
cout<<""<<expr[i];
}
}
}
void Stack::push(char ch)
{
if(!isFull())
{
top++;
expr[top]=ch;
}
}
char Stack::pop()
{
if(!isEmpty())
{
char ch=expr[top];
top--;
return ch;
}
else
{
return '0';
}
}
void Stack::checkParenthesis()
{
cout<<"\nEnter # as a deliminator after expression (At the end)\n";
cout<<"\nEnter Expresssion :";
cin.getline(expr,MAX,'#');
char ch;
bool flag=0;
for(int i=0;expr[i]!='0';i++)
{
if(expr[i]=='('|| expr[i]=='['|| expr[i]=='{')
 push(expr[i]);
if(expr[i]==')'||expr[i]==']'||expr[i]=='}')
{
ch=pop();
if((expr[i]==')'&& ch!='(') ||(expr[i]==']'&&
ch!='[')||(expr[i]=='}'))
{
cout<<"\nExpression is not parenthesized At "<<i<<"="<<expr[i];
flag=1;
break;
}
}
}
if(isEmpty()==1 && flag==0)
cout<<"\n Given expression is Well Parenthesized,";
else
cout<<"\n Given Expression is not well parenthesized.";
}
int main()
{
char ch;
do
{
 Stack s;
 s.checkParenthesis();
 cout<<"\n Do you want to continue?(y/n):";
 cin>>ch;
}while(ch=='y'||ch=='Y');
return 0;
}
