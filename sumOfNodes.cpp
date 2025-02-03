#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node(int k)
    {
        data = k;
        left = NULL;
        right = NULL;
    }
};

int getSize(Node* root){
    if(root == NULL)
        return 0;

    return root->data + getSize(root->left) + getSize(root->right);
}

int main()
{
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Number Of Nodes Are: " << getSize(root) << endl;
    return 0;
}