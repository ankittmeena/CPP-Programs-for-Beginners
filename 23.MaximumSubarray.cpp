#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int currentsum=0;
    int MaxSum=0;
    int left=-1;
    int right=-1;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            currentsum=0;
            for (int k = i; k <= j; k++){
                currentsum=currentsum+arr[k];   
            }
            if (currentsum>MaxSum){
                MaxSum=currentsum;
                left=i;
                right=j;
            }   
        }    
    }
    cout<<"Maximum Sum: "<<MaxSum<<endl;
    for (int k = left; k <= right; k++){
        cout<<arr[k]<<" ";
    }
    
    return 0;
}
