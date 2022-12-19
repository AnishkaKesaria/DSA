// Contains Duplicate - Brute Force - SETS
// Link - https://leetcode.com/problems/contains-duplicate/description/

#include  <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto a:nums) s.insert(a);
        if(s.size()==nums.size()) return 0;
        return 1;
    }
};

// O(N) O(N)