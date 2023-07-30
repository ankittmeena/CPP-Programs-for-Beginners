// Input- 1 2 7 8 5 6
// Output-2 1 8 7 6 5
#include<iostream>
using namespace std;
void SwapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1 <n){
            swap(arr[i],arr[i+1]);
        }
        
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SwapAlternate(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}