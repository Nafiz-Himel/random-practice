// prefix-sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> p(n + 1, 0);
    p[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        p[i] = p[i - 1] + v[i];
    }

    // while(q--){
    //     int l,r;
    //     cin >> l >> r;
    //     int sum =0;
    //     for(int i=l;i<=r;i++){
    //         sum += v[i];
    //     }
    //     cout << sum << endl;
    // }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l==1) cout << p[r] << endl;
        else cout << p[r] - p[l - 1] << endl;
    }

    return 0;
}