#include<bits/stdc++.h>
using namespace std;

class Student{
    public: //access modifier
    string name;
    int roll;

    Student(string name,int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void hello(){
        cout << "Hello from->" << name <<endl;
    }
};

int main()
{
    Student sakib("Shakib Ahmed",23);
    cout << sakib.name << endl;
    sakib.hello() ;
    Student rakib("Rakib Ahmed",30);
    rakib.hello();
    return 0;
}