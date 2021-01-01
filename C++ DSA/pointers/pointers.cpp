#include<iostream>
using namespace std;

int main()
{
    int a=10;

    cout<<&a;
    int *p = &a;
    cout<<endl<<p;
    return 0;
}
