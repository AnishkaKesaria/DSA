#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        int row = matrix.size();
        int col = matrix[0].size();

        int total = row*col;
        int count = 0;

        int startrow = 0;
        int endcol = col-1;
        int endrow = row-1;
        int startcol = 0;

        while(count<total)
        {
            for(int j=startcol; count<total && j<=endcol; j++)
            {
                result.push_back(matrix[startrow][j]);
                count++;
            }
            startrow++;

            for(int i=startrow; count<total && i<=endrow; i++)
            {
                result.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;

            for(int j=endcol; count<total && j>=startcol; j--)
            {
                result.push_back(matrix[endrow][j]);
                count++;
            }
            endrow--;

            for(int i=endrow; count<total && i>=startrow; i--)
            {
                result.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }

        return result;
    }
};