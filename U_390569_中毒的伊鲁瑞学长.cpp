#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
map<int, pair<pair<int, int>, int>> m;
int main()
{
    int n, d;
    cin >> n >> d;
    int x1, y1;
    cin >> x1 >> y1;
    m[1] = {{x1, y1}, 1};
    cout << "Yes\n";
    for (int i = 2; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        m[i] = {{x, y}, 0};
        bool flag = true;
        for (int j = 1; j < i; j++)
        {
            if (m[j].second)
            {
                int x2 = m[j].first.first;
                int y2 = m[j].first.second;
                if ((int)sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y)) <= d)
                {
                    m[i] = {{x, y}, 1};
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}