// Two sum - Two pointer approach
// Link - https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        for(int i=0; i<nums[i]; i++) v.push_back({nums[i], i});
        sort(v.begin(),v.end());
        int s = 0;
        int e = nums.size() - 1;
        while(s<e)
        {
            int sum = v[s].first + v[e].first;
            if(sum == target)
                return {v[s].second,v[e].second};
            else if(sum<target)
                s++;
            else
                e--;
        }
        return {0};
    }
};

// O(n^2) O(1)