#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int no;
    int ans=0;
    for(int i=0;i<=n;i++){
        cin>>no;
        ans=ans^no;
    }
    cout<<"Unique Number:"<<ans<<endl;
    return 0;
}