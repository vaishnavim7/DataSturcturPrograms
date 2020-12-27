//LinkedList with Functions
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Demo
{
    int data;
    struct Demo *next;
};

struct Demo *firstNode(int d)
{
    struct Demo *head = (struct Demo*)malloc(sizeof(struct Demo));
    head->data = d;
    head->next = NULL;
    return head;
};

struct Demo *createNode(int d)
{
    struct Demo *node = (struct Demo*)malloc(sizeof( struct Demo));
    node->data = d;
    node->next = NULL;
    return node;
};

void connectNode(struct Demo *node1, struct Demo *node2)
{
    node1->next = node2;
};

void traverce(struct Demo *temp)
    {
        while(temp != NULL)
        {
            cout<<"data: "<<temp->data<<" next: "<<temp->next<<endl;
            temp = temp->next;
        }
    }

int main()
{
    struct Demo *n1 = firstNode(7);
    struct Demo *n2 = createNode(2);
    struct Demo *n3 = createNode(97);

    connectNode(n1, n2);
    connectNode(n2, n3);

    traverce(n1);

    return 0;
}
