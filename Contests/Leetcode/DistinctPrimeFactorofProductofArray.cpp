#include <bits/stdc++.h>
using namespace std;


    int distinctPrimeFactors(vector<int>& nums) {
        long int product = 1;
        int count = 0;
        for(int i=0; i<nums.size(); i++)
            product *= nums[i];
        for(int i=2; i<=sqrt(product); i++)
        {
            if(product%i==0)
                count++;
            while(product%i==0)
            {
                product/=i;
            }
        }
        return count;
    }


int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        cin>>nums[i];
    cout<<distinctPrimeFactors(nums);

}