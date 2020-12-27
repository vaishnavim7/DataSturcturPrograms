#include<stdlib.h>
#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;

        void setData(int d)
        {
            data = d;
        }
        void setNext(Node *n)
        {
            next = n;
        }
        int getData()
        {
            return data;
        }
        Node *getNext()
        {
            return next;
        }
};

int main()
{
    Node *f = new Node();
    f->setData(10);
    f->setNext(NULL);

    Node *s = new Node();
    s->setData(20);
    s->setNext(NULL);

    Node *t = new Node();
    t->setData(30);
    t->setNext(NULL);

    f->setNext(s);
    s->setNext(t);

    cout<<"In Ascending Order: "<<endl;
    Node *temp = f;
    while(temp != NULL)
    {
        cout<<"Data: "<<temp->getData()<<" Next: "<<temp->getNext()<<endl;
        temp = temp->next;
    }


    return 0;
}
