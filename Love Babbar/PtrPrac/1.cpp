#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f = 8;
    int s = 18;
    int *p= &s;
    *p = 9;
    cout<<f<<" "<<s<<endl;
    return 0;
}