/*Problem Name: Revising Quadratic Equations
Problem Difficulty: 1
Problem Constraints: -100 <= a, b, c <= 100
Problem Description:
Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots. <br>
If Real and Distinct , print the roots in increasing order. <br>
If Real and Equal , print the same repeating root twice <br>
If Imaginary , no need to print the roots.


Note : Print only the integer part of the roots.
Input Format: First line contains three integer coefficients a,b,c for the equation ax^2 + bx + c = 0.
Sample Input: 1 -11 28
Output Format: Output contains one/two lines. First line contains nature of the roots .The next line contains roots(in non-decreasing order) separated by a space if they exist. If roots are imaginary do not print the roots.
Output the integer values for the roots.
Sample Output: Real and Distinct
4 7
*/
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter a,b,c:";
    cin>>a>>b>>c;
    float d=(b*b)-4*a*c;
    float d1=sqrt(d);
    if (d==0)
    {
        cout<<"Real and Equal roots"<<endl;
    }
    else if (d>0)
    {
        cout<<"Real and Distinct roots"<<endl;
    }
    else {
        cout<<"Imaginery roots"<<endl;
    }
    int r1;
    int r2;
    if (d>=0)
    {
        r1=((-b-d1)/(2*a));
        r2=((-b+d1)/(2*a));
        cout<<"Roots are:"<<r1<<' '<<r2<<endl;
    }
    return 0;
}
