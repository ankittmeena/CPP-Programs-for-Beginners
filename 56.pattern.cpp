/*
   1
  121
 12321
1234321
n=4
*/

// ERROR
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            for (int k = i - 1; k <= n; k--)
            {
                cout << k;
            }
            cout << endl;
        }
        
    }
}