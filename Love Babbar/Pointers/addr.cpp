#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    cout<<num<<endl;
    cout<<"Address of num: "<<&num<<endl;

    int *ptr = &num;
    cout<<"Value is: "<<*ptr<<endl;
    cout<<"Value is: "<<ptr<<endl;
    num++;
    cout<<"New value: "<<*ptr<<endl;

    cout<<"Size of num: "<<sizeof(num)<<endl;
    cout<<"Size of pointer: "<<sizeof(*ptr)<<endl;

    double d = 4.2;
    double *p = &d;
    cout<<"Size of double: "<<sizeof(d)<<endl;
    cout<<"Size of pointer: "<<sizeof(p)<<endl;
    return 0;
}