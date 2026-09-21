// 2 pointer approach

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[20];

    cout << "Enter a character array : ";
    cin.getline(str, 20);

    int s = 0, e = strlen(str)-1;

    while(s<e)
    {
        swap(str[s], str[e]);
        s++; e--;
    }

    cout << "Result : " << str;
}