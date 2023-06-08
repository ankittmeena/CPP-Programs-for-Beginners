#include<iostream>
using namespace std;
/*void readline(char arr[], int maxLen, char delim='\n'){
    int i=0;
    char ch=cin.get();
    while (ch!=delim)
    {
        arr[i]= ch;
        i++;
        if (i==(maxLen-1))
        {
            break;
        }
        ch=cin.get();
    }
    arr[i]='\0';
    return;    
}
int main()
{
    char arr[100];
    readline(arr,100,'$');
    cout<<arr<<endl;
    return 0;
}
OR
*/
int main()
{
    char arr[100];
    cin.getline(arr,100,'$');
    cout<<arr<<endl;
    return 0;
}
