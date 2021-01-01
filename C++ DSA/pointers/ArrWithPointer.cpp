#include<iostream>
using namespace std;

int main()
{
    //questions from code
    //q1
    int arr[] = {4, 5, 6, 7};
    int *p = (arr + 1);
    cout << *arr + 9;
    //and 13

    //q2

    int numbers[5];
    //int * p;
    p = numbers;
    *p = 10;
    p = &numbers[2];
    *p = 20;
    p--;
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p+4) = 50;
    for (int n=0; n<5; n++)
    {
        cout << numbers[n] << ",";
    }
    //ans 10,30,20,40,50

    //q3
    char *ptr;
    char Str[] = "abcdefg";
    ptr = Str;
    ptr += 5;
    cout << ptr;
    //ans fg


    //q4
    char arr1[20];
    int i;
    for(i = 0; i < 10; i++) {
    *(arr1 + i) = 65 + i;
    }
    *(arr1 + i) = '\0';
    cout << arr1;
    //ans ABCDEFGHIJ

    //q5
    char *x = "geeksquiz";
    char *y = "geeksforgeeks";
    char *t;
    swap(x, y);
    cout<<x << " "<<y;
    t = x;
    x = y;
    y = t;
   cout<<" "<<x<< " "<<y;
    //ans geeksforgeeks geeksquiz geeksquiz geeksforgeeks

    //q6
   /* float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout<<*ptr2<<" ";
    cout<< ptr2 - ptr1;
    */
    //ans 90.5 3

    //q7
    char st[] = "ABCD";
    for(int i = 0; st[i] != '\0'; i++) {
    cout<< st[i] << *(st)+i << *(i+st) << i[st];

    //ans A65AAB66BBC67CCD68DD



    //q8
    int ***r, **q, *p, i=8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout<<*p << " " <<**q << " "<<***r;
    //ans 10 10 10

    //q9
    /*int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}
    */
    //ans 19

  }


    return 0;
}
