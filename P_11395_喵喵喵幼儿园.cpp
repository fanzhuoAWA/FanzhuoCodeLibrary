#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        char a[105], b[105];
        scanf("%s or %s", &a, &b);
        //cout << a << b;
        if(strcmp(a, "eat") == 0 && strcmp(b, "eat?") == 0)
        {
            cout << "or\n";
        }
        else if(strcmp(a, "eat") == 0)
        {
            for(int j = 0; j <= 105; j++)
            {
                if(b[j] == '?')
                {
                    break;
                }
                cout << b[j];
            }
            cout << "\n";
        }
        else if(strcmp(b, "eat?") == 0)
        {
            cout << a << "\n";
        }
        else
        {
            cout << a << "\n";
        }
    }
    return 0;
}