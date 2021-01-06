#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i =0;i<n;i++)
    {
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }

        for(int j=0;j<(i+(i+1));j++)
        {
            if((i==0)||(i==(n-1))||(j==0)||(j==(2*i)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
