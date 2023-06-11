#include<iostream>
using namespace std;
void spiral(int a[100][100], int m,int n){
    int StartRow=0;
    int EndRow=m-1;
    int StartCol=0;
    int EndCol=n-1;
    while (StartRow<=EndRow and StartCol<=EndCol)
    {
        for (int i = StartCol; i <= EndCol; i++)
        {
            cout<<a[StartRow][i]<<" ";
        }
        StartRow++;
        for (int i = StartRow; i <= EndRow; i++)
        {
            cout<<a[i][EndCol]<<" ";
        }
        EndCol--;
        if (EndRow>StartRow)
        {
            for (int i = EndCol; i >= StartCol; i--)
        {
            cout<<a[EndRow][i]<<" ";
        }
        EndRow--;
        }
        if (EndCol>StartCol)
        {
            for (int i = EndRow; i >= StartRow; i-- )
        {
            cout<<a[i][StartCol]<<" ";
        }
        StartCol++;
        }       
    }     
}
int main()
{
    int a[100][100];
    int m,n;
    cin>>m>>n;
    int val = 1;
    for (int row = 0; row <= m-1; row++)
    {
        for (int col = 0; col <= n-1; col++)
        {
            a[row][col] = val;
            val += 1;
            cout << a[row][col] << " ";     
        }
        cout<<endl;
    }
    spiral(a,m,n);
    
    return 0;
}

