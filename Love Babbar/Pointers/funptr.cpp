#include <bits/stdc++.h>
using namespace std;

void print (int *p)
{
    cout<<*p<<endl; //value
    cout<<p<<endl; //address of value
    cout<<&p<<endl; //address of p
}

void update (int *p)
{
    //p = p+1;
    *p = *p +1;
}

int main()
{
    int value = 10;
    int *p = &value;
    print(p);
    cout<<*p<<endl;
    cout<<p<<endl;
    update(p);
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}