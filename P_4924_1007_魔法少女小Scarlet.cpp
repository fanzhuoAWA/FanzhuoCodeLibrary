#include <iostream>
using namespace std;
int a[505][505];
int temp[505][505];
int main()
{
	int n, m, cur = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			a[i][j] = ++cur;
		}
	}
	for(int k = 1; k <= m; k++)
	{
		int x, y, r, z;
		cin >> x >> y >> r >> z;
		int x1 = x - r, y1 = y - r, x2 = x + r, y2 = y + r; 
		if(z == 0)
		{
			for(int i = x1; i <= x2; i++)
			{
				for(int j = y1; j <= y2; j++)
				{
					temp[x - y + j][x + y - i] = a[i][j];
				}
			}
			for(int i = x1; i <= x2; i++)
			{
				for(int j = y1; j <= y2; j++)
				{
					a[i][j] = temp[i][j];
				}
			}
		}
		if(z == 1)
		{
			for(int i = x1; i <= x2; i++)
			{
				for(int j = y1; j <= y2; j++)
				{
					temp[x + y - j][y - x + i] = a[i][j];
				}
			}
			for(int i = x1; i <= x2; i++)
			{
				for(int j = y1; j <= y2; j++)
				{
					a[i][j] = temp[i][j];
				}
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}