//Simple Linked List 2
#include<iostream>

using namespace std;

struct demo{
    int data;
    struct demo *next;
};

int main()
{
    struct demo st1;
    st1.data = 10;
    //st1.next = NULL;

    struct demo st2;
    st2.data = 20;
    st1.next = &st2;
    //st2.next = NULL;

    struct demo st3;
    st3.data = 30;
    st2.next = &st3;
    st3.next = NULL;

    cout<<"Data: "<<st1.data<<" Next: "<<st1.next<<endl;
    cout<<"Data: "<<st1.next->data<<" Next: "<<st1.next->next<<endl;
    cout<<"Data: "<<st1.next->next->data<<" Next: "<<st1.next->next->next<<endl;

    return 0;
}
