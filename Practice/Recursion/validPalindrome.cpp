#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome (string st)
{
    int s = 0, e = st.size()-1;
    while(s<=e)
    {
        if(st[s]!=st[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
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

    cout<<st;
    return checkPalindrome(st);
}

int main()
{
    string s;
    getline(cin,s);
    cout<<isPalindrome(s);
    return 0;
}