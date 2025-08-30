#include <iostream>
#include <algorithm>
using namespace std;
int a[3005];
int main()
{
    int n, p = 0, j = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    p = a[1];
    for(int i = 2; i <= n; i++)
    {
        if(a[i] > p)
        {
            p = a[i];
        }
        else
        {
            j += p + 1 - a[i];
            p++;
        }
    }
    cout << j;
    return 0;
}