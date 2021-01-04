#include <iostream>

using namespace std;

int min(int arr[],int len)
{
    int min=arr[0];
    for(int i =0;i<len;i++)
    {
        if(arr[i]<min)
        {
            min= arr[i];
        }
    }

    return min;
}
int main()
{
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    
    cout<<min(arr,len)<<endl;
   
    return 0;
}
