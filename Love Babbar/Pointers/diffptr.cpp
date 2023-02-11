#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp[10] = {2,4,6,8,10};
    cout<<"Size of temp: "<<sizeof(temp)<<endl;
    cout<<"Size of first value: "<<sizeof(*temp)<<endl;
    cout<<"Size of address of first value: "<<sizeof(&temp)<<endl;
    cout<<&temp<<endl;

    int *p = &temp[0];
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;

}