#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    int key;
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>key;
    int i;
    for ( i = 0; i <= n-1; i++)
    {
        if(arr[i]==key){
            cout<<key<<" found at "<<i<<" position";
            break;
        }
    }
    if(i==n){
        cout<<"Element not found!!"<<endl;
    }
    return 0;
}
