#include<iostream>
#include<stdlib.h>

using namespace std;

int arr[5];
//int counter = 0;

int f = 0;
int r = 0;

void Insert(int input)
{
    arr[r] = input;
    r++;
}

void show()
{
    cout<<arr[f]<<endl;
    f++;
}

int main()
{
    Insert(7);
    Insert(2);
    Insert(97);
    Insert(9);
    Insert(4);
    cout<<"Elements in the queue are :"<<endl;
    show();
    show();
    show();
    show();
    show();
}
