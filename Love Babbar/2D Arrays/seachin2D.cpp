#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][], int target, int i, int j)
{
    
}

int main()
{
    int i,j;
    cin>>i>>j;
    int arr[i][j];
    for(int row = 0; row<i; row++)
    {
        for(int col = 0; col<j; col++)
        {
            cin>>arr[row][col];
        }
    }

    int target;
    cout<<"Enter target: ";
    if(isPresent(arr,target,i,j))
        cout<<"Element Found";
    else cout<<"Element not found";
    return 0;
}