#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert(Node *&head, int v, Node *&tail)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
bool same(Node *head, Node *head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;
    while (tmp != NULL && tmp2 != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    if (tmp == NULL && tmp2 == NULL)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    Node *head = NULL;
    Node *head2 = NULL;
    Node *tail = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head, val, tail);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head2, val, tail2);
    }
    bool is_same = same(head, head2);
    if (is_same)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}