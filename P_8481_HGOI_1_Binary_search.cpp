#include <iostream>
#include <time.h>
using namespace std;
const int M = 20 + 5;
int n, num[M], q;
int find(int *num, int x, int len)
{
	int l = 0, r = len - 1, mid, w, cnt = 0;
	while(l < r)
	{
		cnt++;
		w = rand() % 2;
		mid = (l+r+w) / 2;
		if(num[mid] - w < x) l = mid +!w;
		else r = mid - w;
	}
	return cnt;
}
int main()
{
    time(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cin >> q;
    for(int i = 1; i <= q; i++)
    {
        int x;
        cin >> x;
        int cntt = find(num, x, n);
        cout << cntt << "\n";
    }
    return 0;
}