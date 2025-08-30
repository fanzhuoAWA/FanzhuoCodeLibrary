#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> sun[100005];
int c[100005];
int black, white, ans;
bool awend;
void dfs(int u, int col)
{
    if(c[u] != 0)
    {
        if(c[u] != col)
        {
            awend = false;
        }
        return;
    }
    if(col == -1)
    {
        black++;
    }
    else
    {
        white++;
    }
    c[u] = col;
    for(auto v : sun[u])
    {
        dfs(v, -col);
    }
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        sun[u].push_back(v);
        sun[v].push_back(u);
    }
    awend = true;
    for(int i = 1; i <= n; i++)
    {
        if(!c[i])
        {
            black = 0;
            white = 0;
            dfs(i, -1);
            if(!awend)
            {
                printf("Impossible");
                return 0;
            }
            if(white < black)
            {
                swap(white, black);
            }
            ans += black;
        }
    }
    cout << ans;
    return 0;
}