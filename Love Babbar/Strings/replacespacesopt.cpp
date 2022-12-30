#include <bits/stdc++.h>
using namespace std;

string replaceSpace(string &str)
{
    string temp = "@40";
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]==' ')
            str.replace(i,1,temp);
    }
    return str;
}