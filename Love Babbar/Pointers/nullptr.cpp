#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=5;

    int *q = &i;
    cout<<*q<<endl;
    cout<<q<<endl; 

    int *p=0;
    p = &i;

    cout<<p<<endl;
    cout<<*p<<endl;

    int *m = p;
    cout<<"p = "<<p<<endl;
    cout<<"m = "<<m<<endl;

    cout<<"*p = "<<*p<<endl;
    cout<<"*m = "<<*m<<endl;

    return 0;
}