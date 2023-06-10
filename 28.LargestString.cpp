#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int len=0;
    int largest_len=0;

    char arr[100];
    char largest[1000];
  
    cin.get();
    for (int i = 0; i < n; i++)
    { 
        cin.getline(arr, 100);
        len=strlen(arr);
        if (len>largest_len)
        {
            largest_len=len;
            strcpy(largest,arr);
        }
        
    }
    cout<<largest<<" and "<<largest_len<<endl;
    return 0;
}
