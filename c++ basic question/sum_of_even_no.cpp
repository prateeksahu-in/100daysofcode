#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum;
    for(int i=1;i<=n;i++)
    {
        if(!(i%2))
        {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
