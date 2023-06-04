#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the digits:";
    cin>>n;
    int sum=0;
    while(n>0){
        int last_digit = n%10;
        sum = sum + last_digit;
        n = n/10;
    }
    cout<<"Sum of digits:"<<sum<<endl;
    return 0;
}
