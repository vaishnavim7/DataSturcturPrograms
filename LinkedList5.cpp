//Dynamic Linked List
#include<iostream>
#include<stdlib.h>
using namespace std;

struct demo{
    int data;
    struct demo *next;
};

int main()
{
    struct demo *st1 = (struct demo*)malloc(sizeof(struct demo));
    st1->data = 10;
    st1->next = NULL;

    struct demo *st2 = (struct demo*)malloc(sizeof(struct demo));
    st2->data = 20;
    st2->next = NULL;

    st1->next = st2;

    struct demo *st3 = (struct demo*)malloc(sizeof(struct demo));
    st3->data = 30;
    st3->next = NULL;

    st2->next = st3;

    struct demo *temp = st1;

    while(temp != NULL)
    {
        cout<<"Data: "<<temp->data<<" Next: "<<temp->next<<endl;
        temp = temp->next;
    }

    return 0;
}
