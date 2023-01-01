// Brute

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> sum;
        int s = 0;
        int j = 2;
        int i =0;
        while(i<nums.size())
        {
            int j=2;
            
        }
        for(int i=0; i<nums.size(); i+=j)
        {
            s+=nums[i];
        }
        sum.push_back(s);
        s=0;
        for(int i=1; i<nums.size(); i+=2)
            s+= nums[i];
        sum.push_back(s);
        int amnt = max(sum[0],sum[1]);
        return amnt;
    }
};