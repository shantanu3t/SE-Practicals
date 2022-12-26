#include<iostream>
#include<stack>
using namespace std; 
bool solve(string str)
{
    stack<char>s;
    for (int i = 0; i < str.length(); i++)
    {
        char c=str[i];

        if(c=='{' || c=='(' || c=='[')
        {
            s.push(c);
        }        
        else if(c=='}' || c==')' || c==']')
        {
            if(s.empty())
            {
                return false;
            }
            else
            {
                if((c=='}' && s.top()=='{') || (c==')' && s.top()=='(') || (c==']' && s.top()=='['))
                {
                    s.pop();
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    if(!s.empty())
    {
        return 0;
    }
    return 1;
    
    
}
int main()
{
    string s="(a+b( )))";
    if(solve(s))
    {
        cout<<"Valid"<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
    
    
    return 0;
}