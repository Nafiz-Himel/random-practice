#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, m;
    // cin >> n >> m;

    // if ((n * m) >= 100)
    //     cout << "Yes" << endl;
    // else
    //     cout << "No" << endl;


    int n,flag = 1;
    scanf("%d", &n);

    int last = n%10;

    for(int i=2; i<last; i++)
    {
        if(last%i == 0 || last == 1)
        {
            flag = 0;
            break;
        }
    }

    if(last == 2 || flag == 1)
        printf("prime");
    else
        printf("not prime");
    return 0;
}
