#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int cnt = 0;
    string a;
    getline(cin, a);
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] != '\n' && a[i] != ' ')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}