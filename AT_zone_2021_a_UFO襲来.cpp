#include <iostream>
using namespace std;
int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'Z' && s[i + 1] == 'O' && s[i + 2] == 'N' && s[i + 3] == 'e')
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}