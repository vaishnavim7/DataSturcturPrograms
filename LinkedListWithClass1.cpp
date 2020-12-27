#include<iostream>
#include<stdlib.h>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main()
{
    Node * nd = new Node();
    nd->data = 10;
    nd->next = NULL;

    Node * nd2 = new Node();
    nd2->data = 20;
    nd2->next = NULL;

    nd->next = nd2;

    Node * nd3 = new Node();
    nd3->data = 30;
    nd3->next = NULL;

    nd2->next = nd3;

    cout<<"Data: "<<nd->data<<" Next: "<<nd->next<<endl;
    cout<<"Data: "<<nd->next->data<<" Next: "<<nd->next->next<<endl;
    cout<<"Data: "<<nd->next->next->data<<" Next: "<<nd->next->next->next<<endl;

    return 0;
}
