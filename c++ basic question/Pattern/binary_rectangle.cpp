#include<iostream>
using namespace std;

int main()
{
    int len;
    int hig;
    cin>>len;
    cin>>hig;
    for(int i=1;i<=hig;i++)
    {
        for(int j=1;j<=len;j++)
        {
            if((i==1)||(i==hig)||(j==1)||(j==len))
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
