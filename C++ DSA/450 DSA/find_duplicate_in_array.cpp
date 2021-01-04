#include <iostream>

using namespace std;

int find(int arr2[],int n)
{
    int arr[n];
    for (int i=0;i<n;i++)
    {
        arr[i] = arr2[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
        }
    }
    
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];   
    }
    cout<<find(arr,n);
    
    return 0;
}
