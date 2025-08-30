#include <iostream>
using namespace std;
int a[105];
int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        bool flag2 = true;
        int cnt1 = 0, cnt0 = 0;
        if(a[1] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt0++;
        }
        for(int i = 2; i <= n; i++)
        {
            if(a[i] == 1)
            {
                cnt1++;
                if(cnt0 == 0 && a[i - 1] != a[i])
                {
                    printf("YES\n");
                    flag2 = false;
                    break;
                }
                else
                {
                    cnt0--;
                }
                // for(int j = i; j >= 1; j--)
                // {
                //     if(a[j] == 0)
                //     {
                //         flag = false;
                //         break;
                //     }
                // }
                // if(flag)
                // {
                //     printf("YES\n");
                //     flag2 = false;
                //     break;
                // }
            }
            else
            {
                cnt0++;
                if(cnt1 == 0 && a[i - 1] != a[i])
                {
                    printf("YES\n");
                    flag2 = false;
                    break;
                }
                else
                {
                    cnt1--;
                }
                // bool flag = true;
                // for(int j = i; j >= 1; j--)
                // {
                //     if(a[j] == 1)
                //     {
                //         flag = false;
                //         break;
                //     }
                // }
                // if(flag)
                // {
                //     printf("YES\n");
                //     flag2 = false;
                //     break;
                // }
                
            }
        }
        if(flag2)
        {
            printf("NO\n");//无人说谎
        }
    }
    return 0;
}