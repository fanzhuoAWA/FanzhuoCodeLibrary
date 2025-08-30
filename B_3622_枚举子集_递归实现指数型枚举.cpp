#include <iostream>
using namespace std;
int n;
char s[15];
void dfs(int x)
{
    if(n == x)
    {
        puts(s);
        return;
    }
    s[x] = 'N';
    dfs(x + 1);
    s[x] = 'Y';
    dfs(x + 1);
}
int main()
{
    cin >> n;
    dfs(0);
    return 0;
}