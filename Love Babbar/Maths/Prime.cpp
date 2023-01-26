//Link - https://leetcode.com/problems/count-primes/
//Brute Force

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPrime(int n)
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
public:
    int countPrimes(int n) {
        int count = 0;
        for(int i=2; i<n; i++)
        {
            if(isPrime(i))
                count++;
        }
        return count;
    }
};