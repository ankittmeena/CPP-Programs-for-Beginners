/*
Problem Name: Simple Input
Problem Difficulty: 1
Problem Constraints: All numbers input are integers between -1000 and 1000.
Problem Description:
Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
Input Format: A list of integers to be processed
Sample Input: 1
2
88
-100
49
Output Format: Print all the numbers before the cumulative sum become negative.
Sample Output: 1
2
88

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the input:";
    cin>>n;
    int sum=0;
        while (n!= 'E')
        {
            cout<<"Press E if you have write the input";
            
            if (sum>=0)
            {
                cout<<n<<endl;
                sum=sum+n;
            }
            else if (n=='E')
            {
                break;
            }
            else{
                break;
            }
        }    
    return 0;
}
*/
