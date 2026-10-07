#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "heloooo", s2 = "Hii";

    // strcat

    // s.append(s2);
    s += s2;
    s.push_back('h');
    s += "Nnn";

    // s[idx_baranur jonne] = 'A'; kora jay na

    s.pop_back();

    s.assign("hahabanahahaha");
    s.erase(2,3);
    s.replace(5,2,"bbhhhaa");
    s.insert(2,"NafiZ");
    cout << s << endl;
    return 0;
}