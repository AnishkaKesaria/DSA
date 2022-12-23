//Maximum Product Subarray
//Link -

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums)
{
    int maxprod = INT_MIN;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i; j<nums.size(); j++)
        {
            int product = 1;
            for(int k=i; k<=j; k++)
            {
                product *= nums[i];
                
            }
            maxprod = max(maxprod,product);
        }
    }
    return maxprod;
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