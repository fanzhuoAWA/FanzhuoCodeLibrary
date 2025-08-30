#include <iostream>
using namespace std;
int n, ans[10];
void dfs(int len, int now, int sum)
{
    if(sum == n)
    {
        cout << ans[1];
        for(int i = 2; i < len; i++)
        {
            cout << "+" << ans[i];
        }
        cout << "\n";
        return;
    }
    for(int i = now; i < n; i++)
    {
        if(sum + i <= n)
        {
            ans[len] = i;
            dfs(len + 1, i, sum + i);
        }
    }
    
}
int main()
{
    cin >> n;
    dfs(1, 1, 0);
    return 0;
}