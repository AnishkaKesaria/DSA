//BEST TIME TO BUY AND SELL STOCK - Bute force
//Link = https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++)
        {
            min_price = min(min_price, prices[i]);
            profit = max(profit, prices[i]-min_price);
        }
        return profit;
    }
};

//O(N) O(1)