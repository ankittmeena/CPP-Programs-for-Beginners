#include<iostream>
using namespace std;
void Staircase(int a[][100], int n, int key){
    int i=0;
    int j=n-1;
    while (i<n and j>=0)
    {
        if (key==a[i][j])
        {
            cout<<"Found At row: "<<i+1<<" and column: "<<j+1<<endl;
            break;
        }
        else if (key<a[i][j])
        {
            j--;
        }  
        else if (key>a[i][j])
        {
            i++;

        }  
    }
}
int main()
{
    int a[100][100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    cout<<"Enter the Element you want to search: ";
    cin>>key;
    Staircase(a,n,key);
    return 0;
}
/*
#include <iostream>
using namespace std;
void Stair(int a[][10],int n,int key)
{
    int i=0;
    int j=n-1;
    while(i<n && j>=0)
    {
        if(key == a[i][j])
        {
            cout<<i<<" "<<j;break;
        }
        else if(key>a[i][j])
        {
            i++;
        }
        else if(key < a[i][j])
        {
            j--;
        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[10][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    Stair(a,n,key);
    return 0;
}
*/