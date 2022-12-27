//O(n/2) = O(n)

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome (string st, int s, int e)
{
    if(s>=e) return true;
    if(st[s]!=st[e]) return false;
    return checkPalindrome(st,s+1,e-1);
}

bool isPalindrome(string s)
{
    string st;
    int n = s.size();
    for(int i = 0; i<n; i++)
    {
        if(isalnum(s[i])) st.push_back(tolower(s[i]));
        else continue;
    }
    return checkPalindrome(st,0,st.size()-1);
}

int main()
{
    string s;
    getline(cin,s);
    cout<<isPalindrome(s);
    return 0;
}