#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int v;
    cin >> v;
    Node *root;
    if (v == -1)
        root = NULL;
    else
        root = new Node(v);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
vector<int> leaf_nodes_descending(Node *root)
{
    vector<int> v;
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        if (p->left == NULL && p->right == NULL)
            v.push_back(p->val);

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return v;
}
int main()
{
    Node *root = input_tree();
    vector<int> v = leaf_nodes_descending(root);
    sort(v.begin(), v.end());
    while (!v.empty())
    {
        cout << v.back() << " ";
        v.pop_back();
    }

    return 0;
}