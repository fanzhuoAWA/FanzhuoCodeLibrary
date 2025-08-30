#include <iostream>
#include <algorithm>
using namespace std;
struct edge
{
    int z, id;
} a[8005], b[8005];
int c[8005];
bool cmp(edge x, edge y)
{
    if (x.z != y.z)
    {
        return x.z < y.z;
    }
    return x.id < y.id;
}
int main()
{
    int n, q, op, x, v;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].z;
        a[i].id = i;
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        c[b[i].id] = i;
    }
    for (int k = 1; k <= q; k++)
    {
        int op, x, v, poz;
        cin >> op >> x;
        poz = c[x];
        if (op == 1)
        {
            cin >> v;
            a[x].z = v; // 把第x位置改为v
            b[poz].z = v;
            while (poz < n && (b[poz].z > b[poz + 1].z || b[poz].z == b[poz + 1].z && b[poz].id > b[poz + 1].id))
            {
                swap(c[x], c[b[poz + 1].id]);
                swap(b[poz], b[poz + 1]);
                poz++;
            }
            while (poz > 1 && (b[poz].z < b[poz - 1].z || b[poz].z == b[poz - 1].z && b[poz].id < b[poz - 1].id))
            {
                swap(c[x], c[b[poz - 1].id]);
                swap(b[poz], b[poz - 1]);
                poz--;
            }
        }
        if (op == 2)
        {
            cout << c[x] << "\n";
        }
    }
    return 0;
}