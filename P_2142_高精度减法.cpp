#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int a[10100], b[10100], c[10100];
int main()
{
    bool f = 0;
    string aa, bb;
    cin >> aa >> bb;
    if((aa < bb && aa.size() == bb.size()) || aa.size() < bb.size())
    {
        swap(aa, bb);
        f = 1;
    }
    int siz = max(aa.size(), bb.size());
    for(int i = aa.size(); i > 0; i--)
    {
        a[i] = aa[aa.size() - i] - '0';
    }
    for(int i = bb.size(); i > 0; i--)
    {
        b[i] = bb[bb.size() - i] - '0';
    }
    for(int i = 1; i <= siz; i++)
    {
        if(a[i] < b[i])
        {
            a[i + 1]--;
            a[i] += 10;
        }
        c[i] = a[i] - b[i];
    }
    while(c[siz] == 0)
    {
        siz--;
    }
    if(f)
    {
        cout << "-";
    }
    for(int i = siz; i > 0; i--)
    {
        cout << c[i];
    }
    if(siz < 1)
    {
        cout << "0";
    }
    /*int jie;0
    bool f = 0;
    string a, b, c;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(int i = 0; i < min(a.size(), b.size()); ++i)
    {
        int l = ((a[i] - '0') - (b[i] - '0')) - jie;
        if(l < 0)
        {
            jie = abs((a[i] - '0') - (b[i] - '0')) / 10;
            l = abs(l);
            while(l >= 10)
            {
                l %= 10;
            }
            f = 1;
        }
        else
        {
            f = 0;
        }
        c += l + '0';
    }
    if(a.size() > b.size())
    {
        for(int i = b.size(); i < a.size(); ++i)
        {
            int l = (a[i] - '0') - jie;
            if(l < 0)
            {
                jie = abs(a[i] - '0') / 10;
                l = abs(l);
                while(l >= 10)
                {
                    l %= 10;
                }
                f = 1;
            }
            else
            {
                f = 0;
            }
            c += l + '0';
        }   
    }
    else if(a.size() < b.size())
    {
        for(int i = a.size(); i < b.size(); ++i)
        {
            int l = (b[i] - '0') - jie;
            if(l < 0)
            {
                jie = abs(b[i] - '0') / 10;
                l = abs(l);
                while(l >= 10)
                {
                    l %= 10;
                }
                f = 1;
            }
            else
            {
                f = 0;
            }
            c += l + '0';
        }  
    }
    reverse(c.begin(), c.end());
    if(f)
    {
        cout << "-" << c;
    }
    else
    {
        cout << c;
    }
    */
    return 0;
}