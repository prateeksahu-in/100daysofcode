#include<iostream>
using namespace std;

int* sortNegative(int arr2[],int n)
{
    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=arr2[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int min=arr[i];
        int min_index=arr[i];
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                min_index=j;
            }
        }

        if(min <0)
        {
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]= temp;
        }

    }

    return arr;
}


int main()
{

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *arr1=sortNegative(arr,n);

    for(int i =0; i < n;i++)
    {
        cout<<arr1[i];
    }

    return 0;
}
