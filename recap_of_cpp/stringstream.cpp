#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s); //strngstream class
    string word;
    ss >> word;

    string word;
    ss >> word;

    cout << word << endl;

    while(ss >> word){
        cout << word << " ";
    }
    return 0;
}