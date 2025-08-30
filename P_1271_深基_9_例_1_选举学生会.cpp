#include <iostream>
#include <algorithm>
using namespace std;
int a[2000005];
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + m + 1);
    for(int i = 1; i <= m; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}