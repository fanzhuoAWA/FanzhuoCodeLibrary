#include <iostream>
using namespace std;
int FanzhuoOVO(int n, int x, int y)
{
    if(x == 1)
    {
        return y;
    }
    if(y == n)
    {
        return n + x - 1;
    }
    if(x == n)
    {
        return 3 * n - y - 1;
    }
    if(y == 1)
    {
        return 4 * n - x - 2;
    }
    return FanzhuoOVO(n - 2, x - 1, y - 1) + 4 * (n - 1);
}
int main()
{
    int n, ci, cj;
    cin >> n >> ci >> cj;
    cout << FanzhuoOVO(n, ci, cj);
    return 0;
}