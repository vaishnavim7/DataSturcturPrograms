#include<iostream>

using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter the 5 elements in array: "<<endl;
    for(int i = 0; i<5; i++)
    {
        cin>>arr[i];
    }
    //cout<<"The 5 elements in array are: "<<endl;
    //for(int i = 0; i<5; i++)
    //{
    //    cout<<arr[i]<<endl;
    //}
    cout<<"The 5 elements in array are: "<<endl;
    for(int i = 4; i>=0; i--)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
