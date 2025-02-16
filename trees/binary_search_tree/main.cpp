#include <iostream>

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node *Insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = newNode(data);
        return root;
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }

    return root;
}

void PrintElements(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PrintElements(root->left);
    std::cout << root->data << std::endl;
    PrintElements(root->right);
}

int main()
{
    Node *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);

    PrintElements(root);
}
