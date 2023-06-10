#include <iostream>
#include <cstring>
using namespace std;
bool ispalindrome(char arr[])
{
    int i = 0;
    int j = strlen(arr) - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[100];
    cin.getline(arr, 100);
    if (ispalindrome(arr))
    {
        cout << "It is Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
    return 0;
}