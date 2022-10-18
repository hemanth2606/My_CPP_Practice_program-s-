//static member variable it will be only one  variable even there are many object
#include<iostream>
#include<cstdlib>
using namespace std;
class staticEx
{
private:
    static int x;
public:
    void init(){
        x = 15;
        cout<<"x = "<<x<<endl;
    }
    void print(){
        x=x+10;
        cout<<x<<"  ";
    }
};

int staticEx::x = 0;
int main(void)
{
    staticEx x1,x2;
    x1.init();x2.init();
    x1.print();x2.print();
}


