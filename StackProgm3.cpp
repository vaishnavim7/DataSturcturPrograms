#include<iostream>

using namespace std;

int arr[5];
int c = 0;

void push(int e)
{
    arr[c] = e;
    cout<<"pushed element is "<<arr[c]<<endl;
    c++;

}
void pop()
{
    c--;
    cout<<"popped element is "<<arr[c]<<endl;

}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();

    return 0;
}
