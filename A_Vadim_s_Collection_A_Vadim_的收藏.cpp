#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int k = 1; k <= T; k++)
    {
        string a;
        cin >> a;
        for(int i = 0; i < a.size(); i++)
        {
            if((a[i] - '0') == (10 - i))
            {
                continue;
            }
            int minn = 1e9, mini;
            for(int j = i + 1; j < a.size(); j++)
            {
                if((a[j] - '0') >= (10 - i) && (a[j] - '0') <= (a[i] - '0') && (a[j] - '0') < minn)
                {
                    minn = a[j];
                    mini = j;
                }
            }
            int a2 = (a[i] - '0');
            a[i] = (minn + '0');
            a[mini] = (a2 + '0');
        }
        cout << a << "\n";
        
    }
    return 0;
}