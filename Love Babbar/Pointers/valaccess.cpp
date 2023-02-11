#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    int a = num;
    a++;

    cout<<num<<endl;

    int *p = &num;
    (*p)++;
    cout<<num<<endl;

    return 0;
}