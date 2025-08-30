#include <iostream>
#include <map>
using namespace std;
string a;
int k;
pair<int, int> nob[20];
map<string, bool> vis;
void dfs(string f)
{
    if(vis[f])
    {
        return;
    }
    vis[f] = true;
    for(int i = 1; i <= k; i++)
    {//ռ

        for(int j = 0; j < f.size(); j++)
        {
            string newf = f;
            if(newf[j] == (nob[i].first + '0'))
            {
                newf[j] = (nob[i].second + '0');
            }
            dfs(newf);
        }
    }
}
int main()
{
    cin >> a >> k;
    for(int i = 1; i <= k; i++)
    {
        cin >> nob[i].first >> nob[i].second;
    }
    dfs(a);
    cout << vis.size();
    return 0;
}