#include <iostream>
using namespace std;
char a[1005][1005];
bool vis[1005][1005];
int fx[] = {0, 0, 1, -1}, cnt, fanzhuo;
pair <int, int> zs, yx;
int fy[] = {1, -1, 0, 0};
void dfs(int x, int y)
{
    if(vis[x][y])
    {
        return;
    }
    fanzhuo++;
    vis[x][y] = true;
    yx = max(yx, {x, y});
    for(int i = 0; i < 4; i++)
    {
        int ffx = x + fx[i], ffy = y + fy[i];
        if(a[ffx][ffy] == '#')
        {
            dfs(ffx, ffy);
        }
    }
}
bool iz(pair<int , int> ff, pair<int, int> f)
{
    int aa = ff.first, bb = f.first, cc = ff.second, dd = f.second;
    for(int i = aa; i <= bb; i++)
    {
        for(int j = cc; j <= dd; j++)
        {
            if(a[i][j] != '#')
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int r, c;
    cin >> r >> c;
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            if(!vis[i][j] && a[i][j] == '#')
            {
                cnt++;
                zs = {i, j}, yx = {i, j};
                fanzhuo = 0;
                dfs(i, j);
                int fanzhuofanzhuofanzhuofanzhuofanzhuofanzhuofanzhuofanzhuofanzhuo = (yx.first - zs.first + 1) * (yx.second - zs.second + 1);
                if(fanzhuo != fanzhuofanzhuofanzhuofanzhuofanzhuofanzhuofanzhuofanzhuofanzhuo)
                {
                    cnt = -1;
                    break;
                }
                if(!iz(zs, yx))
                {
                    cnt = -1;
                    break;
                }
            }
        }
        if(cnt == -1)
        {
            break;
        }
    }
    if(cnt >= 0)
    {
        cout << "There are " << cnt << " ships.";
    }
    else
    {
        cout << "Bad placement.";
    }
    return 0;
}