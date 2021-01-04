#include<iostream>
using namespace std;

int* sort012(int arr2[],int n)
{
    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=arr2[i];
    }
int c_0=0,c_1=0,c_2=0;


    for(int i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 0:
                c_0++;
                break;
            case 1:
                c_1++;
                break;
            case 2:
                c_2++;
                break;
            default:
                break;

        }

    }
    for(int i=0;i<n;i++)
    {
        if(c_0>0)
        {
            arr[i]=0;
            c_0--;
        }
        else if(c_1>0)
        {
            arr[i]=1;
            c_1--;
        }
        else if(c_2>0)
        {
            arr[i]=2;
            c_2--;
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
    int *arr1=sort012(arr,n);

    for(int i =0; i < n;i++)
    {
        cout<<arr1[i];
    }

    return 0;
}
