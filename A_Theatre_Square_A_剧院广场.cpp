#include <iostream>
#include <math.h>
using namespace std;
double n, m, a;
int main()
{
    scanf("%lf%lf%lf", &n, &m, &a);
    printf("%lld", (long long)(ceil(n / a) * ceil(m / a)));
    return 0;
}