#include <iostream>
#include <stack>
using namespace std;

int priority(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    return 0;
}

string postfix(string infix)
{
    stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            postfix = postfix + ch;
        }
        else if(ch == '('){
            s.push(ch);
        }

        else if(ch == ')'){
            while(!s.empty() && s.top() !='('){
                    postfix = postfix + s.top();
                    s.pop();
            }

            s.pop();
        }
        
        else{
            while(!s.empty() && s.top()!='(' && priority(s.top())>=priority(ch)){
                postfix = postfix + s.top();
                s.pop();
            }
            s.push(ch);
        }

    }

    while (!s.empty())
    {
        postfix = postfix + s.top();
        s.pop();
    }
    
    return postfix;
}

int main(){
    string infix;

    cout<<"enter your infix expression : ";
    cin>>infix;

    cout<<"your infix to postfix expression is : "<<postfix(infix);

    return 0;
}