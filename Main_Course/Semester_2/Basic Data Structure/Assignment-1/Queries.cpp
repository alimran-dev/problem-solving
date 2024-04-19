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
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        print_list(head);
    }
    else
    {
        newNode->next = head;
        head = newNode;
        print_list(head);
    }
}
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        print_list(head);
    }
    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
        print_list(head);
    }
}
void delete_position(Node *&head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    Node *tmp = head;
    if (pos == 0)
    {
        Node *deleteNode = head;
        head = tmp->next;
        delete deleteNode;
        print_list(head);
        return;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        if (tmp->next == NULL)
        {
            print_list(head);
            return;
        }
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    if (tmp->next == NULL)
    {
        print_list(head);
        return;
    }
    tmp->next = tmp->next->next;
    delete deleteNode;
    print_list(head);
}
int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
        }
        else if (x == 2)
        {
            delete_position(head, v);
        }
    }

    return 0;
}