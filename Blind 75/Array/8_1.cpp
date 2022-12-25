#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target)
{
    int n = nums.size();
    if(n==1)
    {
        if(nums[0]==target)
            return 0;
        else
            return -1;
    }
    int s,e,ans;
    if(nums[0]<nums[n-1])
    {
        s = 0;
        e = n-1;
    }
    else
    {
        s = 0;
        e = n-1;
        ans = INT_MAX;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(nums[mid]>=nums[0])
                s = mid+1;
            else
            {
                ans = min(ans,nums[mid]);
                e = mid-1;
            }
        }
    }
    if(target<nums[ans] && target>=nums[0])
    {
        s = 0;
        e = ans-1;
    }
    else 
    {
        s = ans;
        e = n-1;
    }
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>target)
            s = mid+1;
        else if(nums[mid]<target)
            e = mid-1;
    }
    return -1;
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
    cout<<search(nums,target);
    return 0;
}