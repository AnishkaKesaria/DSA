#include <bits/stdc++.h>
using namespace std;

int mincost(int i, vector<int> cost, int n)
{
    if(i>=n) return 0;
    int x = mincost(i+1, cost, n);
    int y = mincost(i+2, cost, n);
    int ans = min(x,y) + cost[i];
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> cost;
    for(int i=0; i<n; i++)
    {
        int price;
        cin>>price;
        cost.push_back(price);
    }
    cout<<mincost(0,cost,n);
    return 0;
}