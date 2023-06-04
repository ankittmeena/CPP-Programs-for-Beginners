#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0;
    int i=1;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum of number is:"<<sum<<endl;
    return 0;
}
