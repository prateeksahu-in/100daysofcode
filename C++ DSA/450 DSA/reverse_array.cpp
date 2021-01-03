#include <iostream>

using namespace std;

int reverse(int arr[],int len)
{
    int temp;
    for(int j =0;j<len/2;j++)
    {
        temp=arr[j];
        arr[j]=arr[len-(j+1)];
        arr[len-(j+1)]=temp;
    }
    

    return 0;
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
    
    reverse(arr,len);
    for(int j =0;j<len;j++)
    {
        cout<<arr[j];
    }    
    return 0;
}