#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;

    cin >> a >> s >> b;

    if (s == '>')
        a > b ? cout << "Right\n" : cout << "Wrong\n";
    else if (s == '<')
        a < b ? cout << "Right\n" : cout << "Wrong\n";
    else if (s == '=')
        a == b ? cout << "Right\n" : cout << "Wrong\n";
    return 0;
}