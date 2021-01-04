#include <iostream>

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
    
    cout<<max(arr,len)<<endl;
   
    return 0;
}
