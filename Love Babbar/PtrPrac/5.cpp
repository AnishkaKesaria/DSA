#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f = 8;
    int s = 11;
    int *t = &s;
    f = *t;
    *t = *t +2;
    cout<<f<<" "<<s<<endl;
    return 0;
}