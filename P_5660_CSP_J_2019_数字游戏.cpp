#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}