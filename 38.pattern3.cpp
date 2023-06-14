/*
1234
1234
1234
1234
n=4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
/*
4321
4321
4321
4321
n=4

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
*/