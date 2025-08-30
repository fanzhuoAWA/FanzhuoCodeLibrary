#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int jin = 0;
    string a, b, c;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    /*if(a == "0" && b == "0")
    {
        cout << "0";
        return 0;
    }*/
    for(int i = 0; i < min(a.size(), b.size()); ++i)
    {
        int l = (a[i] - '0' + b[i] - '0') + jin;
        c += (l % 10) + '0';
        jin = l / 10;
    }
    if(a.size() > b.size())
    {
        for(int i = b.size(); i < a.size(); ++i)
        {
            int l = (a[i] - '0') + jin;
            c += (l % 10) + '0';
            jin = l / 10;
        }
    }
    else
    {
        for(int i = a.size(); i < b.size(); ++i)
        {
            int l = (b[i] - '0') + jin;
            c+= (l % 10) + '0';
            jin = l / 10;
        }
    }
    if(jin == 1)
    {
        c += 1 + '0';
    }
    reverse(c.begin(), c.end());
    cout << c;
    return 0;
}