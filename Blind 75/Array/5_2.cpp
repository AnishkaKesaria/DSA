//Maximum Subarray
//Link - https://leetcode.com/problems/maximum-subarray/description/

//O(N^2)

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums)
{
    int maxsum = INT_MIN;
    int n = nums.size();
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j = i; j<n; j++)
        {
            sum += nums[j];
            maxsum = max(sum,maxsum);
        }
    }
    return maxsum;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        int element;
        cin>>element;
        nums.push_back(element);
    }
    cout<<maxSubArray(nums);
    return 0;
}