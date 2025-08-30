#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a, b, f;
    string c;
    cin >> a >> b >> c >> f;
    if(f == 0)
    {
        for(int i = 1; i <= b; i++)
        {
            cout << c;
        }
        cout << "\n";
        for(int i = 2; i < a; i++)
        {
            for(int i = 1; i <= b; i++)
            {
                if(i == 1 || i == b)
                {
                    cout << c;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
        for(int i = 1; i <= b; i++)
        {
            cout << c;
        }
    }
    else
    {
        for(int i = 1; i <= a; i++)
        {
            for(int i = 1; i <= b; i++)
            {
                cout << c;
            }
            cout << "\n";
        }
    }
    return 0;
}