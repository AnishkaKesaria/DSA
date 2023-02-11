#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n)
{
    cout<<"Size: "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0; i<n; i++)
        sum += arr[i];
    return sum;
}

int main()
{
    int arr[5] = {2,4,6,8,10};
    cout<<"Sum: "<<getSum(arr,5)<<endl;
    return 0;
}