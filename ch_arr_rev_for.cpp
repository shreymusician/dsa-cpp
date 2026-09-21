// 2 pointer approach

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[20];

    cout << "Enter a character array : ";
    cin.getline(str, 20);

    for(int s=0, e=strlen(str)-1 ; s<e; s++, e--)
        swap(str[s], str[e]);

    cout << "Result : " << str;
}