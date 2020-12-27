#include<iostream>

using namespace std;

int arr[5];
int c = 0;

class Stack{
    private:
        int ele;
    public:
        void push(int e);
        void pop();
};

void Stack :: push(int e)
{
    arr[c] = e;
    cout<<"pushed element is "<<arr[c]<<endl;
    c++;

}
void Stack :: pop()
{
    c--;
    cout<<"popped element is "<<arr[c]<<endl;

}

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    st.pop();

    return 0;
}
