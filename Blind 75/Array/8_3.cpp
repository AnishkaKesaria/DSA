#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& nums, int low, int high, int target)
{
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]<target)
            low = mid+1;
        else
            high = mid-1; 
    }
    return -1;
}

int Search(vector<int>& nums, int target)
{
    int n = nums.size();
    int low = nums[0];
    int high = nums[n-1];
    int mid = low + (high - low)/2;
    int ans = -1;
    if(nums[mid]==target)
        return mid;
    else if(nums[mid]<target && target<nums[0])
        ans = BinarySearch(nums, mid+1, high, target);
    else if(nums[mid<target] && target>=nums[0])
        ans = BinarySearch(nums, low, mid-1, target);
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
    int target;
    cin>>target;
    cout<<Search(nums,target);
    return 0;
}