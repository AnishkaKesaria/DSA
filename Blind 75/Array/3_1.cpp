// Contains Duplicate - Brute force
// Link - https://leetcode.com/problems/contains-duplicate/description/

#include  <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            int num = nums[i];
            for(int j = i+1; j<nums.size(); j++)
            {
                if(num==nums[j])
                    return true;
            }
        }
        return false;
    }
};

// Results in TLE - O(n^2) O(1)