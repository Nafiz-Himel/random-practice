#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, e;
    char c, d;

    cin >> a >> c >> b >> d >> e;

    if (c == '+')
        (a + b) == e ? cout << "Yes\n" : cout << (a + b) << endl;
    else if (c == '-')
        (a - b) == e ? cout << "Yes\n" : cout << (a - b) << endl;
    else if (c == '*')
        (a * b) == e ? cout << "Yes\n" : cout << (a * b) << endl;
    return 0;
}