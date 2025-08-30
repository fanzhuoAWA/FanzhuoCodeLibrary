//欧拉筛-质数筛
#include <iostream>
#include <vector>
using namespace std;
const int M = 1e8 + 5;
vector <int> p;
bool Ip[M];
void oul(int n)
{
    p.clear();
    p.reserve(n / 20);
    for(int i = 1; i <= n; ++i)
    {
        if(Ip[i] == false)
        {
            p.push_back(i);
        }
        for(int j = 1, t; j < p.size() && (t = i * p[j]) <= n; ++j)
        {
            Ip[i] = true;
            if(i % p[j] == 0)
            {
                break;
            }
        }
    }
}
int main()
{
    return 0;
}