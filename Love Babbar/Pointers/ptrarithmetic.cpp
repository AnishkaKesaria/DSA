#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    int *t = &i;
    cout<<*t++<<endl;
    //cout<<(*t)++<<endl;
    cout<<t<<endl;
    t = t+1;
    cout<<t<<endl;
    return 0;
}