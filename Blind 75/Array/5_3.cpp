//Maximum Subarray
//Link - https://leetcode.com/problems/maximum-subarray/description/

//O(N)

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums)
{
    int maxsum = nums[0];
    int n = nums.size();
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += nums[i];
        maxsum = max(sum,maxsum);
        if(sum<0)
            sum = 0;
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