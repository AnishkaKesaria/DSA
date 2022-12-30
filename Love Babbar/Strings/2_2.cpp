//Maximum Occuring Character

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int> alphabet(26);
        for(int i=0; i<str.size(); i++)
        {
            tolower(str[i]);
            int a = str[i] - 'a';
            alphabet[a]++;
        }
        int maxc = -1;
        int ans;
        for(int i=0; i<26; i++)
        {
            if(maxc<alphabet[i])
            {
                ans = i;
                maxc = alphabet[i];
            }
        }
        return (ans+'a');
    }

};