#include <bits/stdc++.h>
using namespace std;

int Search(vector<int>& nums, int target)
{
    int low = 0;
    int high = nums.size() -1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(nums[mid]==target) return mid;
        if(nums[low]<=nums[mid])
        {
            if(target>= nums[low] && target<= nums[mid])
                high = mid - 1;
            else
                low = mid+1;
        }
        else
        {
            if(target>=nums[mid] && target<=nums[high])
                low = mid + 1;
            else
                high = mid -1;
        }
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
    cout<<Search(nums,target);
    return 0;
}