#include<iostream>
#include<cmath>
using namespace std;

class complex
{
private:
    int re_,im_;
public:
    complex(int re,int im):re_(re),im_(im){
        cout<<"ctor";print();//constuctor
    }
    complex(const complex& c):re_(c.re_),im_(c.im_){
        cout<<"cctor: ";print();//copy constuctor 
    }
    complex operator = (const complex &c){
        re_ = c.re_;im_ =c.im_;
        cout<<"copy: ";print();return *this;//copy assignment 
    }
    ~complex(){
        cout<<"dc";print();
    }
    int norm(){
        return sqrt(re_*re_ + im_*im_);
    }

    void print(){
        cout<<"|"<<re_<<"+j"<<im_<<"| = "<<norm()<<endl;
        
    }
};
int main(void){
    complex c1(4,5),c2(7,8);
    complex c3(c2);
    c2=c3;
    c1=c2=c3; 
    c1.print();c2.print();c3.print();
}