// Link - https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>result;
    for(int i = 0; i<mCols; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<nRows; j++)
                result.push_back(arr[j][i]);
        }
        else
        {
            for(int j=nRows-1; j>=0; j--)
                result.push_back(arr[j][i]);
        }
    }
    return result;
}