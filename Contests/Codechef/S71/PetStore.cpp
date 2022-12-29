#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> type(n); //Not a dynamic allocation
        for(int i=0; i<n; i++)
            cin>>type[i];
        string ans = (n%2==0) ? "YES" : "NO";
        sort(type.begin(), type.end());
        for(int i=1; i<n; i+2)
        {
            if(type[i]!=type[i-1])
            {
                ans = "NO";
                break;
            }
        }
        cout<<ans;
    }
    return 0;
}