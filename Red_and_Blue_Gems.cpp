#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    if ((n * x) > (m * y))
        cout << n * x << endl;
    else
        cout << m * y << endl;

    return 0;
}
