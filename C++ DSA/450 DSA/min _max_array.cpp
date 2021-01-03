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
int max(int arr[],int len)
{
    int max=arr[0];
    for(int i =0;i<len;i++)
    {
        if(arr[i]>max)
        {
            max= arr[i];
        }
    }

    return max;
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
    
    cout<<max(arr,len)<<endl;
   
    return 0;
}
