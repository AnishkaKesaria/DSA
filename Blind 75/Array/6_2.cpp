//Maximum Product Subarray
//Link -

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums)
{
    int curr_max = nums[0];
    int curr_min = nums[0];
    int ans = nums[0];
    int prev_max = nums[0];
    int prev_min = nums[0];
    for(int i=1; i<nums.size(); i++)
    {
        curr_max = max(prev_max*nums[i], prev_min*nums[i]);
        curr_max = max(nums[i], curr_max);
        curr_min = min(prev_max*nums[i], prev_min*nums[i]);
        curr_min = min(nums[i], curr_min);
        ans = max(ans, curr_max);
        prev_max = curr_max;
        prev_min = curr_min;
    }
    return ans;
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
    cout<<maxProduct(nums);
    return 0;
}