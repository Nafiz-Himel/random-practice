#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node a(20),b(30),c(40);

    a.next = &b;
    b.next = &c;

    // cout << a.val << endl << b.val << endl << c.val << endl;
    cout << a.val << endl << (*a.next).val << endl << (*(*a.next).next).val << endl;
    return 0;
}