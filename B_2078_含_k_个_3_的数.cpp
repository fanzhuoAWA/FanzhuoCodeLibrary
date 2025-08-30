#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int cnt = 0, k;
    string s;
    cin >> s >> k;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '3')
        {
            cnt++;
        }
    }
    if(cnt == k)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}