//TLE

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int robbery(int i, vector<int> &nums)
    {
        if(i>=nums.size())
            return 0;
        int op1 = nums[i] + robbery(i+2,nums);
        int op2 = robbery(i+1,nums);
        return max(op1,op2);
    }
    int rob(vector<int>& nums) {
        int amnt = robbery(0,nums);
        return amnt;
    }
};