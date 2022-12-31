#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        sort(s1.begin(), s1.end());
        int n = s1.size();
        for(int i=0; i<s2.size()-s1.size()+1; i++)
        {
            string temp;
            int j=0;
            while(j<n)
            {
                temp.push_back(s2[i+j]);
                j++;
            }
            sort(temp.begin(),temp.end());
            cout<<temp<<" ";
            if(s1==temp)
                return true;
            //if(strcmp(s1,temp)) return true;
        }
        return false;
    }
};