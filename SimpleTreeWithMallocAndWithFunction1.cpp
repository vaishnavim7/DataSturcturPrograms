#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *CreateNode(int d)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = d;
    node->left = NULL;
    node->right = NULL;
};

void Connect(struct Node *n1, struct Node *n2, struct Node *n3, struct Node *n4)
{
    n1->left = n2;
    n1->right = n3;
    n3->left = n4;
}
int main()
{
    struct Node *root = CreateNode(50);
    struct Node *l = CreateNode(25);
    struct Node *r = CreateNode(75);
    struct Node *rl = CreateNode(60);

    Connect(root, l, r, rl);

cout<<"Left n2:"<<root->left->data<<endl;
    cout<<"Root n1:"<<root->data<<endl;
    cout<<"Right n3:"<<root->right->data<<endl;
    cout<<"Right n3 Left n4:"<<root->right->left->data<<endl;
}

