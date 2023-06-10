#include <iostream>
#include <cstring>
using namespace std;
void Removeduplicates(char arr[])
{
    int l = strlen(arr);
    if (l == 1 or l == 0)
    {
        return;
    }
    int prev = 0;
    for (int current = 1; current < l; current++)
    {
        if (arr[current] != arr[prev])
        {
            prev++;
            arr[prev] = arr[current];
        }
    }
    arr[prev + 1] = '\0';
    return;
}
int main()
{
    char arr[100];
    cin.getline(arr, 100);
    Removeduplicates(arr);
    cout<<arr<<endl;
    return 0;
}