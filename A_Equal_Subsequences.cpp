#include <iostream>//一片零一片一
using namespace std;
int n, k;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        scanf("%d%d", &n, &k);
        int zero = n - k;
        for(int i = 1; i <= zero; i++)
        {
            cout << "0";
        }
        for(int i = 1; i <= k; i++)
        {
            cout << "1";
        }
        cout << "\n";
    }
    return 0;
}