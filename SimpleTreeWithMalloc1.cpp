#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void traverse(Node *root)
{
    if(root != NULL)
    {
        traverse(root->left);
        cout<<root->data<<endl;
        traverse(root->right);
    }
}

void inorder(Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

void preorder(Node *root)
{
    if(root != NULL)
    {
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}


int main()
{
    struct Node *n1 = (struct Node*)malloc(sizeof(struct Node));
    n1->data = 10;
    n1->left = NULL;
    n1->right = NULL;

    struct Node *n2 = (struct Node*)malloc(sizeof(struct Node));
    n2->data = 5;
    n2->left = NULL;
    n2->right = NULL;

    struct Node *n3 = (struct Node*)malloc(sizeof(struct Node));
    n3->data = 15;
    n3->left = NULL;
    n3->right = NULL;

    struct Node *n4 = (struct Node*)malloc(sizeof(struct Node));
    n4->data = 12;
    n4->left = NULL;
    n4->right = NULL;

    struct Node *n5 = (struct Node*)malloc(sizeof(struct Node));
    n5->data = 20;
    n5->left = NULL;
    n5->right = NULL;

    //connections
    n1->left = n2;
    n1->right = n3;

    n3->left = n4;
    n3->right = n5;

    cout<<"Simple Traverse:"<<endl;
    traverse(n1);

    cout<<"In-Order Traverse:"<<endl;
    inorder(n1);

    cout<<"Pre-Order Traverse:"<<endl;
    preorder(n1);

    cout<<"Post-Order Traverse:"<<endl;
    postorder(n1);

    //cout<<"Left n2:"<<n1->left->data<<endl;
    //cout<<"Root n1:"<<n1->data<<endl;
    //cout<<"Right n3:"<<n1->right->data<<endl;
    //cout<<"Right n3 Left n4:"<<n1->right->left->data<<endl;
    //cout<<"Right n3 Right n5:"<<n1->right->right->data<<endl;

    return 0;
}
