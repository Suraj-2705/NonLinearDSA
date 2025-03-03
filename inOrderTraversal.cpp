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
    Node*root = new Node(10);
    root->left = new Node(17);
    root->right = new Node(21);
    root->left->left = new Node(5);
    root->left->left->left = new Node(32);

    root->left->right = new Node(36);
    root->left->right->left = new Node(44);
    root->left->right->right = new Node(61);
    root->right->right = new Node(75);
    root->right->right->left = new Node(81);
    root->right->right->left->right = new Node(85);
    

    inorderTraversal(root);

    return 0;
}