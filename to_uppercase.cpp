#include<iostream>
using namespace std;

int main()
{
    char str[20];

    cout << "Enter a mixed letter string : ";
    cin.getline(str, 20);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(int(str[i]) >= 97)
            str[i] = str[i] - 32;
    }

    cout << "Result : " << str;
}