// Sum of two Integer without arithmetic operators
//Link - https://leetcode.com/problems/sum-of-two-integers/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        if(b==0) return a;
        int sum = a^b;
        int carry = (unsigned int) (a&b) << 1;
        return getSum(sum, carry);
    }
};