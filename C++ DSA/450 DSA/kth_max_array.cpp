#include<iostream>
using namespace std;
int kth_max(int arr_add[],int n,int k)
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
        int max = arr[i];
        int max_index = i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]>max)
            {
                max= arr[j];
                max_index =j;
            }

        }
        //swap//
        int temp=arr[i];
        arr[i]=arr[max_index];
        arr[max_index]=temp;
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
    cout<<kth_max(arr,n,k);


    return 0;
}
