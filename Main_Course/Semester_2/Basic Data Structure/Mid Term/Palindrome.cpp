#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
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
}
void print_list_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int a;
        cin >> a;
        if (a == -1)
            break;
        insert_tail(head, tail, a);
    }
    // print_list(head);
    // cout << endl;
    // print_list_reverse(tail);
    Node *tmp = head;
    Node *tmp2 = tail;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            cout << "NO";
            return 0;
        }
        tmp = tmp->next;
        tmp2 = tmp2->prev;
    }
    cout << "YES";
    return 0;
}