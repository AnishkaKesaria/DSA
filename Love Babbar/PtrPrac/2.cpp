#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f = 6;
    int *p = &f;
    int *q = p;
    (*q)++;
    cout<<f<<endl;
    return 0;
}