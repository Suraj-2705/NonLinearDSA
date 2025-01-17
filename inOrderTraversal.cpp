#include<iostream>
using namespace std;

class Node
{   
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


void inorderTraversal(Node *root)
{
    if(root == nullptr)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}


int main()
{
    Node*root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    inorderTraversal(root);

    return 0;
}