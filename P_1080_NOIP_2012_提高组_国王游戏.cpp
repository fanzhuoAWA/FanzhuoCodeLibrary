#include <iostream>
using namespace std;
int chen = 1;
struct ren
{
    int z, y;
}a[10005];
int main()
{
    int n, aa, b;
    cin >> n >> aa >> b;
    chen *= aa;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].z >> a[i].y;
        chen *= a[i].z;
    }
    return 0;
}