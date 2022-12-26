 #include <iostream>
#include <stack>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(string s)
{

    stack<char> st; 
    string ans;

    for (int i = 0; i < s.length(); i++) 
    {
        char ch = s[i];
    
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            ans.push_back(ch);
        }

        else if (ch == '(')
        {
            st.push('(');
        }

        else if (ch == ')') 
        {
            while (st.top() != '(') 
            {
                ans.push_back(st.top());
                st.pop();
            }
            st.pop();
        }

        else 
        {
            if(s[i]=='^' && st.top()=='^')
            {
                st.push(s[i]);
            }
            else
            {
                while (!st.empty() && prec(s[i]) <= prec(st.top()) ) 
                {
                    ans.push_back(st.top());
                    st.pop();
                    
                }
                st.push(ch);
            }
        }
    }

    while (!st.empty()) 
    {
        ans.push_back(st.top());
        st.pop();
    }

    cout << ans << endl;
}

int main()
{
    string s = "a+b*(c^d-e)^(f+g*h)-i^j^k";

    infixToPostfix(s);
    return 0;
}


