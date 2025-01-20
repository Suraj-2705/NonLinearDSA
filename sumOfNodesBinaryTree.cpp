#include<iostream>
using namespace std;

class Node
{
public:
    int key;
    Node *left, *right;

    Node(int x)
    {
        key = x;
        left =NULL;
        right = NULL;
    }

};

int addBT(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    return(root->key + addBT(root->left) + addBT(root->right));

}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);

    int sum = addBT(root);
    cout << "Sum =" << sum << endl;
    return 0;



}