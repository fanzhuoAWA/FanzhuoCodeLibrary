#include <iostream>
#include <set>
using namespace std;
multiset <long long> s;
int main()
{
    int q;
    scanf("%d", &q);
    for(int i = 1; i <= q; ++i)
    {
        long long c, x, k;
        cin >> c >> x;
        if(c == 1)
        {
            s.insert(x);
        }
        if(c == 2)
        {
            cin >> k;
            auto it = s.upper_bound(x);
            while(it != s.begin() && k >= 1)
            {
                it--;
                k--;
            }
            if(k)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << *it << "\n";
            }
        }
        if(c == 3)
        {
            cin >> k;
            auto it = s.lower_bound(x);
            while(it != s.end() && k >= 2)
            {   
                k--;
                it++;
            }
            if(it == s.end())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << *it << "\n";
            }
        }
    }
    return 0;
}