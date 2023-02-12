#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f = 8;
    int *p = &f;
    cout<<(*p)++<<endl;
    cout<<f<<endl;
    return 0;
}