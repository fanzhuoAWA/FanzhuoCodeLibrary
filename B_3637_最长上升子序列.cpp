#include <iostream>
#include <math.h>
using namespace std;
int a[5005], d[5005];
int main()
{
	int n, len = 0;
	d[0] = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i++)
	{
		if(a[i] > d[len])
		{
			d[++len] = a[i];
		}
		else
		{
			int l = 1, r = len, pos;
			while(l <= r)
			{
				int mid = (l + r) / 2;
				if(a[i] <= d[mid])
				{
					pos = mid;
					r = mid - 1;
				}
				else
				{
					l = mid + 1;
				}
			}
			d[pos] = a[i];
		}
	}
	cout << len;
	return 0;
}