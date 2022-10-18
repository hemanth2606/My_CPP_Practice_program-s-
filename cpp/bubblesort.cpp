#include<iostream>
using namespace std;
int main(void)
{
    int arr[] = {4,3,2,1};
    int temp;
    int n = 4; 
    for(int i =0 ; i<n ; ++i)
    {
        for(int j =0; j<n-1; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }
    for(int i = 0 ; i<n ; ++i){
        cout<<" "<<arr[i];
    }
}