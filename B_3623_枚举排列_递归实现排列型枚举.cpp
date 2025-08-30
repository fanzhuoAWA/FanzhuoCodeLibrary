#include <iostream>
using namespace std;
int n, k;
int s[15];
bool ss[15];
void dfs(int x)
{
    if(x == k + 1)
    {
        for(int i = 1; i <= x - 1; i++)
        {
            cout << s[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(!ss[i])
        {
            ss[i] = 1;
            s[x] = i;
            dfs(x + 1);
            ss[i] = 0;
        }
    }
}
int main()
{
    cin >> n >> k;
    dfs(1);
    return 0;
}