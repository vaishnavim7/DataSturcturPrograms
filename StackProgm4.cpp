#include<iostream>

using namespace std;

int arr[5];
int c = 0;

int isFull()
{
    if(c == 5)
    {
        cout<<"Full"<<endl;
        return 0;
    }
    else{
        return 1;
    }
}
void push(int e)
{
    int res = isFull();
    if(res == 1)
    {
        arr[c] = e;
        cout<<"pushed element is "<<arr[c]<<endl;
        c++;
    }
}

int isEmpty()
{
    if(c == 0)
    {
        cout<<"Empty"<<endl;
        return 0;
    }
    else{
        return 1;
    }
}
void pop()
{
    int res = isEmpty();
    if(res == 1)
    {
        c--;
        cout<<"popped element is "<<arr[c]<<endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    return 0;
}
