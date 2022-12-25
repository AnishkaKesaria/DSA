#include <bits/stdc++.h>
using namespace std;

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

int BinarySearch(vector<int>& nums, int s, int e, int target)
{
    int mid = s+(e-s)/2;
    if(nums[mid]==target)
        return mid;
    else if(nums[mid]>target)
        s = mid+1;
    else
        e = mid-1;
    return -1;
}

int Search(vector<int>& nums, int target)
{
    int ans = findMin(nums);
    int result1, result2;
    int n = nums.size();
    result1 = BinarySearch(nums,0,ans-1,target);
    result2 = BinarySearch(nums,ans,n-1,target);
    int answer = max(result1,result2);
    return answer;
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