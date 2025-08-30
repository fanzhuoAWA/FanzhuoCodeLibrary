#include<iostream>
using namespace std;
int a[40][40];
int main()
{
    int n;
    scanf("%d", &n);
    a[0][n / 2] = 1;
    int k = 0, f = n / 2;
    for(int i = 2; i <= n * n; i++)
    {
        if(f == n - 1 && k != 0)
        {
            a[k - 1][0] = i;
            k--;
            f = 0;
        }
        else if(k == 0 && f != n - 1)
        {
            a[n - 1][f + 1] = i;
            k = n - 1;
            f++;
        }
        else if(k == 0 && f + 1 == n)
        {
            a[k + 1][f] = i;
            k++;
        }
        else if(k != 0 && f !=n - 1)
        {
            if(a[k - 1][f + 1] == 0 && k - 1 >=0 && f + 1 <= n)
            {
                a[k - 1][f + 1] = i;
                f++;
                k--;
            }
            else
            {
                a[k + 1][f] = i;
                k++;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}