#include <iostream>
using namespace std;
int x[25], n, k, ans;
bool is_zhi(int x)
{
    for(int i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}
void dfs(int cnt, int sum, int last)
{
	if(cnt > k)
	{
		if(is_zhi(sum))
		{
			ans++;
		}
		return;
	}
	for(int i = last; i <= n; i++)
	{
		dfs(cnt + 1, sum + x[i], i + 1); 
	}
}
int main()
{
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &x[i]);
	}
	dfs(1, 0, 1);
	printf("%d", ans);
	return 0;
}