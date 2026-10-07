#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    cout << s[0] << endl
         << s.at(3) << endl
         << s.back() << endl
         << s.front() << endl
         << s[s.size()-1] << endl;
    return 0;
}