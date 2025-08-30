#include <iostream>
#include <queue>
using namespace std;
struct xy
{
	int xx, yy;
};
int n, m, x, y;
int yp[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int xp[] = {-1, 1, -2, 2, -2, 2, -1, 1}, chees[405][405];
bool vis[405][405];
queue <xy> q;
void bfs(int x1, int y1)
{
	vis[x1][y1] = 1;
	q.push({x1, y1});
	while(!q.empty())
	{
		xy s = q.front();
		q.pop();
		x1 = s.xx;
		y1 = s.yy;
		for(int i = 0; i < 8; i++)
		{
			if(x1 + xp[i] <= n && y1 + yp[i] <= m && y1 + yp[i] >= 1 && x1 + xp[i] >= 1 && !vis[x1 + xp[i]][y1 + yp[i]])
			{
				q.push({x1 + xp[i], y1 + yp[i]});
				chees[x1 + xp[i]][y1 + yp[i]] = chees[x1][y1] + 1;
				vis[x1 + xp[i]][y1 + yp[i]] = 1;
				
			}
		}
	}
}
int main()
{
	cin >> n >> m >> x >> y;
	bfs(x, y);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(vis[i][j] == 0)
			{
				chees[i][j] = -1;
			}
			printf("%-5d", chees[i][j]);
		}
		cout << "\n";
	}
	return 0;
}