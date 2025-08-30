#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string pre = "You are right, but ";
    if (s.substr(0, pre.size()) == pre)
    {
        cout << "AI" << endl;
    }
    else
    {
        cout << "Human" << endl;
    }
    return 0;
}
