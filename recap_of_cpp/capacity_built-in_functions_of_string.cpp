#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hiiiii"; //string hocche ekta built-in class
    cout << s.size() << endl;
    cout << s.max_size() << endl; //10^6
    cout << s.capacity() << endl;
    // s.clear();
    s.empty() ? cout << "faka\n" : cout << "faka na\n";
    s.resize(4);
    cout << s << endl;
    s.resize(7,'h');
    cout << s << endl;
    // s ta hocche string class er object
    return 0;
}