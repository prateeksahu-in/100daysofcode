#include<iostream>
using namespace std;

int main()
{
    int side;
    cin>>side;

    for(int i=0;i<side;i++)
    {
        for(int k=side-i-1;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {

            if((j==0)||(j==i)||(i==side-1))
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

}
