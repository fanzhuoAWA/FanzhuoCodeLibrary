#include <iostream>
using namespace std;
int main()
{
    int n, kim = 0, now = 1, nowt = 1;
    cin >> n;
    while(n != 0)
    {
        nowt--;
        kim += now;
        if(nowt == 0)
        {
            now++;
            nowt = now;
        }
        n--;
    }
    cout << kim;
    return 0;
}