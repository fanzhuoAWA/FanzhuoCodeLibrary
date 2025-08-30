#include <iostream>
using namespace std;
int a[15];
int main()
{
    int s, cnt = 0;
    for(int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    cin >> s;
    s += 30;
    for(int i = 1; i <= 10; i++)
    {
        if(s >= a[i])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}