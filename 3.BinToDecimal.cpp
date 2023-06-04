#include<iostream>
using namespace std;
int main()
{ 
    int N;
    cout<<"Enter the number;";
    cin>>N;
    int n;
    while (N>0)
    {
        cout<<"Enter the binary number:";
        cin>>n;
        int sum=0;
        int power=1;
        while (n>0)
        {
            int r=n%10;
            sum=sum+r*power;
            power=power*2;
            n=n/10;
        }
    cout<<"Decimal Number is:"<<sum<<endl; 
    N=N-1;
    }
    return 0;
}

