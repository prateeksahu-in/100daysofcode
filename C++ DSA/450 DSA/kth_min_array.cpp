#include<iostream>
using namespace std;
int kth_min(int arr_add[],int n,int k)
{
    int arr[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=arr_add[i];
    }


      //////////////////////
     //   sorting logic  //
    //////////////////////

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

      //////////////////////
     //   sorting logic  //
    //////////////////////


    return arr[k-1];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;
    cout<<kth_min(arr,n,k);


    return 0;
}
