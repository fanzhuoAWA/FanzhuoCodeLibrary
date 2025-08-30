#include <iostream>
#include <string>
using namespace std;
char order[105][105];
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> order[i][j];
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			int sum = 0;
			if(order[i][j] != '*')
			{
				if(order[i - 1][j] == '*')//上
				{
					sum++;
				}
				if(order[i + 1][j] == '*')//下
				{
					sum++;
				}
				if(order[i][j + 1] == '*')//右
				{
					sum++;
				}
				if(order[i][j - 1] == '*')//左
				{
					sum++;	
				}
				if(order[i + 1][j + 1] == '*')
				{
					sum++;
				}
				if(order[i + 1][j - 1] == '*')
				{
					sum++;
				}
				if(order[i - 1][j + 1] == '*')
				{
					sum++;
				}
				if(order[i - 1][j - 1] == '*')
				{
					sum++;
				}
				order[i][j] = sum + 48;
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cout << order[i][j];
		}
		cout << "\n";
	}
}