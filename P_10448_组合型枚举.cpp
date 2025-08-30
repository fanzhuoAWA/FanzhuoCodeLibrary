#include <iostream>
#include <vector>
using namespace std;
int n, m;
void dfs(int poz, vector <int>& x)
{
    if(x.size() == m)
    {
        for(int i : x)
        {
            cout << i << " ";
        }
        cout << "\n";
        return ;
    }
    if(poz > n)
    {
        return;
    }
    x.push_back(poz);
    dfs(poz + 1, x);
    x.pop_back();
    dfs(poz + 1, x);
}
int main()
{
    cin >> n >> m;
    vector <int> fyc;
    dfs(1, fyc);
    return 0;
}