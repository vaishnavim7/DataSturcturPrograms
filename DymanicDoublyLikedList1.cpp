#include<stdlib.h>
#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node *prev;

        void setData(int d)
        {
            data = d;
        }
        void setNext(Node *n)
        {
            next = n;
        }
        void setPrev(Node *p)
        {
            prev = p;
        }
        int getData()
        {
            return data;
        }
        Node *getNext()
        {
            return next;
        }
        Node *getPrev()
        {
            return prev;
        }
};

int main()
{
    Node *f = new Node();
    f->setData(10);
    f->setNext(NULL);
    f->setPrev(NULL);

    Node *s = new Node();
    s->setData(20);
    s->setNext(NULL);
    s->setPrev(NULL);

    Node *t = new Node();
    t->setData(30);
    t->setNext(NULL);
    t->setPrev(NULL);

    f->setNext(s);

    s->setNext(t);
    s->setPrev(f);

    t->setPrev(s);

    cout<<"In Ascending Order: "<<endl;
    Node *temp = f;
    while(temp != NULL)
    {
        cout<<"Prev: "<<temp->getPrev()<<" Data: "<<temp->getData()<<" Next: "<<temp->getNext()<<endl;
        temp = temp->next;
    }

    cout<<endl<<"In Descending Order: "<<endl;
    Node *temp2 = NULL;
    for(temp2 = f; temp2->next!=NULL; temp2 = temp2->next);
    while(temp2 != NULL)
    {
        cout<<"Prev: "<<temp2->getPrev()<<" Data: "<<temp2->getData()<<" Next: "<<temp2->getNext()<<endl;
        temp2 = temp2->prev;
    }


    return 0;
}
