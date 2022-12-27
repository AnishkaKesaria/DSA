#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> powerset;

void subset(vector<int>& set, vector<int>& nums, int i)
{
    if(i == nums.size())
    {
        powerset.push_back(set);
        return;
    }
    set.push_back(nums[i]);
    subset(set, nums, i+1);
    set.pop_back();
    subset(set, nums, i+1);
}

vector<vector<int>> setGenerator (vector<int>& nums)
{
    vector<int> set;
    subset(set, nums, 0);
    return powerset;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; ++i)
    {
        int num;
        cin>>num;
        nums.push_back(num);
    }
    cout<<setGenerator(nums);
    return 0;
}