#include <iostream>
#include <vector>
using namespace std;
struct saz
{
    bool isbuz;
    int time, ss;
};
vector <saz> sazp;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        bool ib;
        int t, s;
        cin >> ib >> t >> s;
        sazp.push_back({ib, t, s});
    }
    for(int i = 1; i <= n; i++)
    {
        if(!sazp[i].isbuz)//shiditie
        {
           if(n  - sazp[i].time > 45)
           {
                sazp[i].erase();
           } 
        }
    }
    return 0;
}