#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node *left;
    Node *right;

Node(int k)
{
    data = k;
    left = NULL;
    right = NULL;
}
};


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
}
