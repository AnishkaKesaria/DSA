#include <bits/stdc++.h>
using namespace std;

// Time Complexity - O(X)
// Space Complexity - O()

int power(int n, int x)
{
    if(x==0) return 1;
    return (n*power(n, x-1));
}

int main()
{
    int n,x;
    cin>>n>>x;
    cout<<power(n,x);
    return 0;
}