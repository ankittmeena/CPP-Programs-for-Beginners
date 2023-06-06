/*Problem Name: Print reverse
Problem Difficulty: 1
Problem Constraints: 0 <= N <= 1000000000
Problem Description:
Take N as input, Calculate it's reverse also Print the reverse.
Input Format: 
Sample Input: 123456789
Output Format: 
Sample Output: 987654321

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while (n>0)
    {
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    cout<<ans<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n>0)
    {
        int digit=n%10;
        cout<<digit;
        n=n/10;
    }
    return 0;
}
