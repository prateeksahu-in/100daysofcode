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
    //size of pointer
    cout<<sizeof(p)<<endl;

    //changes in value of var
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;

    // initializing with var and its pointer
    cout<<endl;
    int i=a;
    int j=*p;

    cout<<i<<endl;
    cout<<j<<endl;

    j++;

    cout<<j<<endl;
    cout<<*p<<endl;

    //initializing one pointer with another pointer var
    int *q=p;


    cout<<q<<endl;
    cout<<p<<endl;
    //garbage in pointer
   // int *ptr;
   // cout<<ptr<<endl;
  //  cout<<*ptr<<endl;
  //  *ptr++;
   // cout<<*ptr<<endl;


   //segmentation error(always initialize pointer with null)
    int *ptr2;
    cout<<*ptr2<<endl;
    (*(ptr2+1))++;
    cout<<*ptr2<<endl;



    float f = 10.2;
    float *pf=&f;

    double d= 122.32;
    double *pd =&d;

    return 0;
}
