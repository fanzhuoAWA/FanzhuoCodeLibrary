#include <iostream>
using namespace std;
int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0}, r, c;
char louz[120][100];
bool vis[120][100];
void bfs(int x, int y, int poz)
{
    if((x < 1 || y < 1 || x > r || y > c) || vis[x][y] || louz[x][y] == '*')
    {
        return;
    }
    if(x == r && y == c)
    {
        for(int i = 1; i < poz; i++)
        {
            
        }
    }
    for(int i = 0; i < 4; i++)
    {
        int xx = x + dx[i], yy = y + dy[i];

    }
}
int main()
{
    cin >> r >> c;
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            cin >> louz[i][j];
        }
    }
    bfs(1, 1, 1);
    return 0;
}