/*
1
21
321
4321
n=4

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=i;j>=1;j--){
            
            cout<<count;
            count -- ;  
        }
        cout<<endl;
    }
}
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            
            cout<<i-j+1;  
        }
        cout<<endl;
    }
}