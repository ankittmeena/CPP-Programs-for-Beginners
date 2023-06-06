#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for (int i = 0; i <= n-1 ; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];    
        }
        if (arr[i]<smallest)
        {
            smallest=arr[i];    
        }   
    }
    cout<<largest<<" is largest Number."<<endl;
    cout<<smallest<<" is smallest number."<<endl;
    
    return 0;
}
