#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *prev;
    Node *next;
    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_list(Node *&head, Node *&tail, string val)
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
            break;
        insert_list(head, tail, s);
    }
    int q;
    cin >> q;
    Node *pos = head;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        if (s == "visit")
        {
            string a;
            cin >> a;
            bool av = false;
            Node *tmp = head;
            while (tmp != NULL)
            {
                if (a == tmp->val)
                {
                    cout << a << endl;
                    pos = tmp;
                    av = true;
                    break;
                }
                tmp = tmp->next;
            }
            if (!av)
                cout << "Not Available" << endl;
        }
        else if (s == "next")
        {
            Node *tmp = pos;
            if (tmp->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << tmp->next->val << endl;
                pos = tmp->next;
            }
        }
        else if (s == "prev")
        {
            Node *tmp = pos;
            if (tmp->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << tmp->prev->val << endl;
                pos = tmp->prev;
            }
        }
    }

    return 0;
}