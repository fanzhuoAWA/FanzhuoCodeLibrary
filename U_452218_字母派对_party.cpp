#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        bool flag = true;
        for(int i = 0; i < s.size(); i++)
        {
            if(i % 2 == 0)//伙伴
            {
                if(s[i] < 'a' || s[i] > 'z')
                {
                    flag = false;
                    cout << "No\n";
                    break;
                }
            }
            if(i % 2 != 0)//大咖
            {
                if(s[i] < 'A' || s[i] > 'Z')
                {
                    flag = false;
                    cout << "No\n";
                    break;
                }
            }
        }
        if(flag)
        {
            cout << "Yes\n";
        }
    }
    return 0;
}