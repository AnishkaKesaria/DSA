#include <bits/stdc++.h>
using namespace std;

// Time COmplexity - O(log x)
// Space Complexity - O(log x)

int power(int n, int x)
{
    if(x==1) return n;
    if(x==0) return 1;
    int ans;
    int pans = power(n, x/2);
    ans = pans*pans;
    if(x%2==1) ans*=n;
    return ans;
}

int main()
{
    int n,x;
    cin>>n>>x;
    cout<<power(n,x);
    return 0;
}