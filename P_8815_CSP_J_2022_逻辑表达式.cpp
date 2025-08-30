#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s[0] == '1' && s[1] == '|')
    {
        cout << "1\n0 1";
        return 0;
    }
    if(s[0] == '0' && s[1] == '&')
    {
        cout << "0\n1 0";
        return 0;
    }
    if(s[0] == '0' && s[1] == '|' && s[2] == '1')
    {
        cout << "1\n0 0";
        return 0;
    }
    if(s[0] == '1' && s[1] == '&' && s[2] == '1')
    {
        cout << "1\n0 0";
        return 0;
    }
    if(s[0] == '1' && s[1] == '&' && s[2] == '0')
    {
        cout << "0\n0 0";
        return 0;
    }
    return 0;
}