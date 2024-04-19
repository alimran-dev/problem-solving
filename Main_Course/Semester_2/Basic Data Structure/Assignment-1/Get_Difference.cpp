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
void insert_at_tail(Node *&head, int v, Node *&tail)
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
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int max_in_list(Node *head)
{
    Node *tmp = head;
    int mx = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->val > mx)
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }
    return mx;
}
int min_in_list(Node *head)
{
    Node *tmp = head;
    int mn = INT_MAX;
    while (tmp != NULL)
    {
        if (tmp->val < mn)
        {
            mn = tmp->val;
        }
        tmp = tmp->next;
    }
    return mn;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val, tail);
    }
    int mx = max_in_list(head);
    int mn = min_in_list(head);
    cout << mx - mn;
    // cout << mx<<" "<<mn;
    // print_list(head);
    return 0;
}