#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    string s;
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3 >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '-' && ((islower(s[i - 1]) && islower(s[i + 1]) && s[i + 1] > s[i - 1]) || (isdigit(s[i - 1]) && isdigit(s[i + 1]) && s[i + 1] > s[i - 1])))
        {
            if(s[i + 1] - s[i - 1] == 1)
            {
                s.erase(i, 1);
                continue;
            }
            else if(s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] <= 'z' && s[i + 1] <= 'z')
            {
                string c;
                if(p1 == 3)
                {
                    for(int j = s[i - 1] + 1; j < s[i + 1]; j++)
                    {
                        for(int k = 1; k <= p2; k++)
                        {
                            c += '*';
                        }
                    }
                }
                else
                {
                    for(int j = s[i - 1] + 1; j < s[i + 1]; j++)
                    {
                        for(int k = 1; k <= p2; k++)
                        {
                            if(p1 == 2)
                            {
                                char t = j - 32;
                                c += t;
                            }
                            else
                            {
                                char t = j;
                                c += t;
                            }
                        }
                    }
                }
                if(p3 == 2)
                {
                    reverse(c.begin(), c.end());
                }
                s.erase(i, 1);
                s.insert(i, c);
            }
            else if(s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] <= '9' && s[i + 1] >= '0')
            {
                string c;
                if(p1 == 3)
                {
                    for(int j = s[i - 1] + 1; j < s[i + 1]; j++)
                    {
                        for(int k = 1; k <= p2; k++)
                        {
                            c += '*';
                        }
                    }
                }
                else
                {
                    for(int j = s[i - 1] + 1; j < s[i + 1]; j++)
                    {
                        for(int k = 1; k <= p2; k++)
                        {
                            char t = j;
                            c += t;
                        }
                    }
                }
                if(p3 == 2)
                {
                    reverse(c.begin(), c.end());
                }
                s.erase(i, 1);
                s.insert(i, c);
            }
        }
    }
    cout << s;
    return 0;
}