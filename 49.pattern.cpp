/*
A
BB
CCC
n=3
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+ i-1;
            cout<<ch;
            ch=ch++;
        }
        cout<<endl;
    }
}