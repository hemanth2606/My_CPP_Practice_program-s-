#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main(void)
{
    char post[100] = {'1','2','*','4','-'},ch;
    stack<int> s;
    for(int i = 0; i<strlen(post);i++)
    {
        ch = post[i];
        if(isdigit(ch))
        {
            s.push(ch-'0');
        }
        else
        {
            int op1 = s.top();s.pop();
            int op2 = s.top();s.pop();
            switch (ch)
            {
            case '+': s.push(op1+op2);
                break;
            case '-': s.push(op1-op2);
                break;
            case '/': s.push(op1/op2);
                break;
            case '*': s.push(op1*op2);
                break;
            default:cout<<"invalid operator";
                break;
            }
        }

    }
    cout<<s.top();
    
}