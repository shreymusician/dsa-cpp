#include<iostream>
using namespace std;

int main()
{
    char str[20];

    cout << "Enter a mixed letter string : ";
    cin.getline(str, 20);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            int sp = str[i] - 97;
            str[i] = 65 + sp;
        }
            
    }

    cout << "Result : " << str;
}