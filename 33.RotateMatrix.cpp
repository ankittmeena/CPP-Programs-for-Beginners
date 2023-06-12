#include <iostream>
#include <algorithm>
using namespace std;
void rotate(int a[][100], int n)
{
    for (int row = 0; row < n; row++)
    {
        int StartCol = 0;
        int EndCol = n - 1;
        while (StartCol < EndCol)
        {
            swap(a[row][StartCol], a[row][EndCol]);
            StartCol++;
            EndCol--;
        }
    }
    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}
int main()
{
    int a[100][100];
    int n;
    cin >> n;
    cout<<"Original: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"Rotated: "<<endl;
    rotate(a, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}