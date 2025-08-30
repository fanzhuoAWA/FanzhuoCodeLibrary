#include <iostream>
#include <set>
using namespace std;
int cnt[100005], ans[100005];
set <int> s;
int main()
{
    int n, top = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int ai;
        cin >> ai;
        cnt[ai]++;
        s.insert(ai);
    }
    if(s.size() % 2 == 1)
    {
        cout << "-1";
        return 0;
    }
    for(auto i : s)
    {
        top++;
        ans[top] = i;
        cnt[i] -= 1;
    }
    for(int i = 1; i <= n; i++)
    {
        while(cnt[i] > 0)
        {
            top++;
            ans[top] = i;
            cnt[i] -= 1;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}