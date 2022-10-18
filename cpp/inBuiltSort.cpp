#include<iostream>
#include<algorithm>
using namespace std;
 bool compare(int i , int j){
        return(i<j);

    }
int main(void)
{
   int arr[]= {4,3,2,1};
   sort(arr,arr+4);
   for(int i = 0 ; i<4; i++)
   {
    cout<<" "<<arr[i];
   }
}