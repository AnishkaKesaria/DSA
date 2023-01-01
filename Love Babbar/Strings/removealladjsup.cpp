//TLE aagaya bhai!

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1])
            {
                int j = 0;
                while(s[i]==s[i+1])
                    j++;
                s.erase(i,j);
            }
            if(i==0)
                i-=1;
            if(i>0)
                i-=2;
        }
        return s;
    }
};