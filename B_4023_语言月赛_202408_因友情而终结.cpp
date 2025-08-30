#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int cnt = 0;
    string s[255];
    for(int i = 0; i < s.size() - 5; i++)
    {
        if(s[i] == 'f' && s[i + 1] == 'r' && s[i + 2] == 'i' && s[i + 3] == 'e' && s[i + 4] == 'n' && s[i + 5] == 'd')
        {
            cnt++;
            i += 5;
        }
    }
    cout << cnt;
    return 0;
}