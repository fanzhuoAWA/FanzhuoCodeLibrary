#include <iostream>
using namespace std;
int main()
{
    int n, d = 0, c = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        d++;
        if(c == 0 && n % 3 == 1)
        {
            c = d;
        }
        n -= (n + 2) / 3;
    }
    printf("%d %d", d, c);
    return 0;
}