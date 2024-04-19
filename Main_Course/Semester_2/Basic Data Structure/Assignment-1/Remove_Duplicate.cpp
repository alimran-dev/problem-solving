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
void insert(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_list(Node *head)
{
    if (head == NULL)
    {
        cout << endl;
        return;
    }
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void delete_duplicate(Node *head, int v)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->next->val == v)
        {
            Node *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        }
        else
            tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert(head, v);
    }
    Node *tmp = head;
    while (tmp != NULL)
    {
        delete_duplicate(tmp, tmp->val);
        tmp = tmp->next;
    }
    print_list(head);
    return 0;
}