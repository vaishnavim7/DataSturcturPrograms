#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};


int main()
{
    struct Node *nd = (struct Node*)malloc(sizeof(struct Node));
    nd->data = 10;
    nd->next = NULL;
    nd->prev = NULL;

    struct Node *nd2 = (struct Node*)malloc(sizeof(struct Node));
    nd2->data = 20;
    nd2->next = NULL;
    nd2->prev = NULL;

    struct Node *nd3 = (struct Node*)malloc(sizeof(struct Node));
    nd3->data = 30;
    nd3->next = NULL;
    nd3->prev = NULL;

    //connection
    nd->next = nd2;
    nd->prev = NULL;

    nd2->next = nd3;
    nd2->prev = nd;

    nd3->next = NULL;
    nd3->prev = nd2;

    struct Node *temp = nd;

    while(temp != NULL)
    {
        cout<<"Prev: "<<temp->prev<<" Data: "<<temp->data<<" Next: "<<temp->next<<endl;
        temp = temp->next;
    }

    struct Node *temp2 = NULL;

    for(temp2 = nd; temp2!=NULL; temp2 = temp2->next)
    {
        cout<<"Prev: "<<temp2->prev<<" Data: "<<temp2->data<<" Next: "<<temp2->next<<endl;
    }

    return 0;
}
