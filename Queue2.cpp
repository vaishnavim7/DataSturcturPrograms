#include<iostream>
#include<stdlib.h>

using namespace std;

int arr[5];

int f = 0;
int r = 0;

int IsEmpty()
{
    if(r == f)
    {
        cout<<"Queue is Empty."<<endl;
        return 0;
    }
    else{
        return 1;
    }
}

int IsFull()
{
    if(r == 5)
    {
        cout<<"Queue is Full."<<endl;
        return 0;
    }
    else{
        return 1;
    }
}

void Insert(int input)
{
    int res = IsFull();
    if(res == 1)
    {
        arr[r] = input;
        r++;
    }
}

void show()
{
    int res = IsEmpty();
    if(res == 1)
    {
        cout<<arr[f]<<endl;
        f++;
    }
}

int main()
{
    Insert(7);
    Insert(2);
    Insert(97);
    Insert(9);
    Insert(4);
    Insert(5);

    cout<<"Elements in the queue are :"<<endl;
    show();
    show();
    show();
    show();
    show();
    show();
}
