#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hellooo";
    // for(int i=0;i<s.size();i++){
    //     cout << s[i] << endl;
    // }

    cout << *s.begin() << endl << *s.end() << endl << *(s.end()-1) << endl << endl;

    for(string:: iterator it = s.begin(); it < s.end(); it++){
        cout << *it << endl;
    }
    return 0;
}