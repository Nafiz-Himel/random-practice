#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(50);

    head->next = a;
    a->next = b;

    // cout << head->val << endl;
    // cout << head->next->val << endl;

    Node * tmp = head;
    while(tmp != nullptr){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    return 0;
}