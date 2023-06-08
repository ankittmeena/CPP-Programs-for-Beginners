#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,5,7,10,11,12,13};
    int s=16;
    int i=0;
    int j=sizeof(arr)/sizeof(int)-1;
    while (i<j)
    {
        int currentsum=arr[i]+arr[j];
        if (currentsum>s)
        {
            j--;
        }
        else if (currentsum<s)
        {
            i++;
        }
        else{
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }    
    }
    return 0;
}
