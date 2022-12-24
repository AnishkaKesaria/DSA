//Find Minimum in Roated Sorted Array - Binary Search
//Link -
//O(logn)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums.back()) return nums[0];
        int n = nums.size();
        if(n==1) return nums[0];
        int s = 0;
        int e = n-1;
        int ans = INT_MAX;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(nums[mid]>=nums[0])
                s = mid+1;
            else
            {
                ans = min(ans, nums[mid]);
                e = mid-1;
            }
        }
        return ans;
    }
};