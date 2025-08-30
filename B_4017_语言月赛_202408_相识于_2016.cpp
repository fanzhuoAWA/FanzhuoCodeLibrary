#include <iostream>
using namespace std;
int main()
{
    int x, y, anz;
    scanf("%d%d", &x, &y);
    anz = 12 * (x - 2016) + y - 7;
    printf("%d", anz);
    return 0;
}