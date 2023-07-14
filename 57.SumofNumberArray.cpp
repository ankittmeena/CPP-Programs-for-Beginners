#include <iostream>
using namespace std;
void sumofnumbers(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<< sum << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sumofnumbers(arr,n);
    return 0;
}