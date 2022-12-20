//Product of Array Except Self
//Link - https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);
        int p = 1;
        for(int i=0; i<nums.size(); i++)
        {
            answer[i] = p;
            p = p*nums[i];
        }
        p = 1;
        for(int i=nums.size()-1; i>=0; i--)
        {
            answer[i] *= p;
            p = p*nums[i]; 
        }
        return answer;
    }
};

//O(N) O(N)