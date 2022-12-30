#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[] = "Hellooooooo, My name is Anishka";
    char *ptr;
    ptr = strtok(s," ");
    cout<<ptr<<endl;
    while(ptr!=NULL)
    {
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
    return 0;
}