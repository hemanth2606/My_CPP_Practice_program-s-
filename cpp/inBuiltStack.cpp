#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main(void)
{
    char str[10] = "hello";
    stack<char> s;
    for(int i = 0 ;i<strlen(str);i++)
        s.push(str[i]);
    cout<<"the resverse string is:";
    while(!s.empty())
    {
        cout<<s.top(); 
        s.pop();

    }
}