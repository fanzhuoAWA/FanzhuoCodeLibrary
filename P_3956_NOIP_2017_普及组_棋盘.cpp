#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int qi[1005][1005];
int jiy[1005][1005];
int m, n;
void dfs(int x, int y, int c, bool flag, int now)
{
	if(x > m || x < 1 || y > m || y < 1)
	{
		return;
	}
	jiy[x][y] = now;
	if(now + abs(c - qi[x - 1][y]) < jiy[x - 1][y] && qi[x - 1][y] != -1)
	{
		dfs(x - 1, y, qi[x - 1][y], 1, now + abs(c - qi[x - 1][y]));
	}
	if(now + abs(c - qi[x][y - 1]) < jiy[x][y - 1] && qi[x][y - 1] != -1)
	{
		dfs(x, y - 1, qi[x][y - 1], 1, now + abs(c - qi[x][y - 1]));
	}
	if(now + abs(c - qi[x + 1][y]) < jiy[x + 1][y] && qi[x + 1][y] != -1)
	{
		dfs(x + 1, y, qi[x + 1][y], 1, now + abs(c - qi[x + 1][y]));
	}
	if(now + abs(c - qi[x][y + 1]) < jiy[x][y + 1] && qi[x][y + 1] != -1)
	{
		dfs(x, y + 1, qi[x][y + 1], 1, now + abs(c - qi[x][y + 1]));
	}
	if(flag)
	{
		if(now + 2 < jiy[x - 1][y] && qi[x - 1][y] == -1)
		{
			dfs(x - 1, y, c, 0, now + 2);
		}
		if(now + 2 < jiy[x][y - 1] && qi[x][y - 1] == -1)
		{
			dfs(x, y - 1, c, 0, now + 2);
		}
		if(now + 2 < jiy[x + 1][y] && qi[x + 1][y] == -1)
		{
			dfs(x + 1, y, c, 0, now + 2);
		}
		if(now + 2 < jiy[x][y + 1] && qi[x][y + 1] == -1)
		{
			dfs(x, y + 1, c, 0, now + 2);
		}
	}
	return;
}
int main()
{
	memset(qi, -1, sizeof(qi));
    cin >> m >> n;
    for(int i = 1; i <= n; i++)
    {
    	int x, y, c;
        scanf("%d%d%d",&x,&y,&c);
        qi[x][y]=c;
    }
    memset(jiy, 127, sizeof(jiy));
    int sb = jiy[m][m];
    dfs(1, 1, qi[1][1], 1, 0);
    if(jiy[m][m] == sb)
	{
		jiy[m][m] = -1;
	}
    cout<< jiy[m][m];
	return 0;
}