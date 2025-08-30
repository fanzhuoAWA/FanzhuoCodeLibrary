#include <iostream>
#include <map>
#include <cstring>
using namespace std;
map <string, int> inter;
int main()
{
	//freopen("network.in", "r", stdin);
	//freopen("network.out", "w", stdout); 
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        string op, s;
        cin >> op >> s;
        if(op == "Server")
        {
            if(inter.count(s))
            {
                cout << "FAIL\n";
                continue;
            }
            cout << "OK\n";
            inter[s] = i;
        }
        if(op == "Client")
        {
        	if(inter.count(s))
            {
                cout << inter[s] << "\n";
                continue;
            }
            cout << "FAIL\n";
        }
    }
    return 0;
}