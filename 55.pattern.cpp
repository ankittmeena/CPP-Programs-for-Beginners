/*
****
 ***
  **
   *
n=4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}