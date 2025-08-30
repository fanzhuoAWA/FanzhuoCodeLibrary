#include <iostream>
using namespace std;
int n, k, s[6];
void dfs(int poz)
{
    if(poz > n)
    {
        for(int i = 1; i <= n; i++)
        {
            cout << s[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= k; i++)
    {
        s[poz] = i;
        dfs(poz + 1);
    }
}
int main()
{
    cin >> n >> k;
    dfs(1);
    return 0;
}