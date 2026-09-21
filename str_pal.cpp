#include<iostream>
#include<cstring>
using namespace std;

void reverse(char str[])
{
    for(int s=0, e=strlen(str)-1 ; s<e; s++, e--)
        swap(str[s], str[e]);
}

bool is_palin(char str[])
{
    char revs[strlen(str)+1];
    strcpy(revs, str);
    reverse(revs);

    cout << revs << endl;

    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] != revs[i])
            return false;
    }

    return true;
}

int main()
{
    char s[] = "malayalam";
    is_palin(s)? cout << "True" : cout << "False";
}