#include<iostream>
using namespace std;
void swap(int& ,int&);
int main(void)
{
    int x = 2,y=3;
   swap(x,y);
   cout<<x<<endl<<y;

}
void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}