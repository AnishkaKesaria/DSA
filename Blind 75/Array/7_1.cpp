// Find Minimum in Rotated Sorted Array - Brute
//Link - 

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    while(nums[i]<nums[i+1])
    {
        if(i==0 && (nums[i]<nums[n-1]))
            return nums[i];
        i++;
    }
    return nums[i+1];
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
    cout<<findMin(nums);
    return 0;
}