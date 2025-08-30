#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    for(int i = 2; i <= 1000000000; i++)
    {
        if(a % i == b % i && b % i == c % i)
        {
            cout << i;
            return 0;
        }
    }
}