#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int min = arr[i];
        int min_index = i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min= arr[j];
                min_index =j;
            }

        }
        //swap//
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
        //swap//
    }


    for(int i =0;i<n;i++)
    {
        cout<<arr[i];
    }


    return 0;
}
