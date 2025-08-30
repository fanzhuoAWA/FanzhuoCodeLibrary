#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <pair<int, int>> rb(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> rb[i].first >> rb[i].second;
    }
    sort(rb.begin(), rb.end());
    vector <int> maxn(n);
    maxn[0] = rb[0].second;
    for(int i = 1; i < n; ++i)
    {
        maxn[i] = max(maxn[i - 1], rb[i].second);
    }
    vector<int> minn(n);
    minn[n - 1] = rb[n - 1].second;
    for (int i = n - 2; i >= 0; --i)
    {
        minn[i] = min(minn[i + 1], rb[i].second);
    }
    vector <bool> izo(n, false);
    for (int i = 0; i < n; ++i)
    {
        if (i > 0 && rb[i].second <= maxn[i - 1])
        {
            izo[i] = true;
        }
        if (i < n - 1 && rb[i].second >= minn[i + 1])
        {
            izo[i] = true;
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        if (!izo[i])
        {
            cnt++;
        }
    }
    if(cnt % 2 == 1)
    {
        int mina = 1e9, minb = 1e9;
        for(int i = 0; i < n; ++i)
        {
            if (!izo[i])
            {
                mina = min(mina, rb[i].first);
                minb = min(minb, rb[i].second);
            }
        }
        if (mina == n - cnt + 1 && minb == n - cnt + 1)
        {
            cout << "NIE" << endl;
            return 0;
        }
    }
    if (!cnt)
    {
        cout << "TAK" << endl;
    }
    else
    {
        cout << "NIE" << endl;
    }
    return 0;
}
