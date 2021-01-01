#include<iostream>
using namespace std;

int main()
{
    int a=10;
    //print address if var 'a' by '& symbol'
    cout<<&a<<endl;
    int *p = &a;
    //print address of var 'a' stored in pointer
    cout<<p<<endl;
    //directly print value of variable by pointer
    cout<<*p<<endl;



    float f = 10.2;
    float *pf=&f;

    double d= 122.32;
    double *pd =&d;

    return 0;
}
