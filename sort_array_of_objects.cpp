#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    float marks;
};

int main(){
    int n;
    cin >> n;

    Student s[n];
    for(int i=0;i<n;i++) {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    for(int i=0;i<n;i++) {
        
    }
    return 0;
}