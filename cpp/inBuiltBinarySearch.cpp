#include<iostream>
#include<algorithm>
using namespace std;
 bool compare(int i , int j){
        return(i<j);

    }
int main(void)
{
   int arr[]= {1,2,3,4},k=1;
   if(binary_search(arr,arr+4,k)){
        cout<<"key found";}
    else{
        cout<<"key not found";}

}