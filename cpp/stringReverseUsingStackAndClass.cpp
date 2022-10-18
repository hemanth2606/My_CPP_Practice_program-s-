#include<iostream>
#include<cstdlib>
using namespace std;
class stack
{
public:char data_[100];int top_;
public:bool empty(){return (top_ == -1);}
       char top(){return data_[top_];}
       void push(char x){data_[++top_] = x;}
       void pop(){--top_;}
};
int main(void)
{
stack s;char ch[100] = "ABCD";
s.top_ = -1;
int count = 4;
for(int i = 0;i<count;i++ )
{
    s.push(ch[i]); 
}
cout<<"resverse string"<<endl;
 while (!s.empty())
    {
        cout<<s.top();s.pop();
    }
}