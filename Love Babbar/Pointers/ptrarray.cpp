#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {0,2,4,6};
    cout<<"Address of first memory block is: "<<arr<<endl;
    cout<<"Address of first memory block is: "<<&arr[0]<<endl;
    cout<<"Address of first memory block is: "<<*arr<<endl;
    cout<<"Address of first memory block is: "<<*arr + 1<<endl;
    cout<<"Address of first memory block is: "<<*(arr + 1)<<endl;
    cout<<"Address of first memory block is: "<<arr + 1<<endl;
    cout<<"Address of first memory block is: "<<2[arr]<<endl;
    cout<<"Address of first memory block is: "<<arr[2]<<endl;

    return 0;
}