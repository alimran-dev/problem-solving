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
int search(Node *head, int x)
{
    int idx = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return idx;
        }
        idx++;
        tmp = tmp->next;
    }

    return -1;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
                break;
            insert(head, val, tail);
        }
        int x;
        cin >> x;
        int result = search(head, x);
        cout << result << endl;
    }
    return 0;
}