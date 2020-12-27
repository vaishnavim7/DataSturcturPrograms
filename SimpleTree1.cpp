#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};



int main()
{
    struct Node n1;
    n1.data = 10;
    n1.left = NULL;
    n1.right = NULL;

    struct Node n2;
    n2.data = 5;
    n2.left = NULL;
    n2.right = NULL;

    struct Node n3;
    n3.data = 15;
    n3.left = NULL;
    n3.right = NULL;

    struct Node n4;
    n4.data = 12;
    n4.left = NULL;
    n4.right = NULL;

    struct Node n5;
    n5.data = 20;
    n5.left = NULL;
    n5.right = NULL;

    //connections
    n1.left = &n2;
    n1.right = &n3;

    n3.left = &n4;
    n3.right = &n5;

    cout<<"Left n2:"<<n1.left->data<<endl;
    cout<<"Root n1:"<<n1.data<<endl;
    cout<<"Right n3:"<<n1.right->data<<endl;
    cout<<"Right n3 Left n4:"<<n1.right->left->data<<endl;
    cout<<"Right n3 Right n5:"<<n1.right->right->data<<endl;

    return 0;
}
