#include <iostream>
using namespace std;
void MagicalPark(char park[][100], int m, int n, int k, int s)
{
    bool Success = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = park[i][j];
            if (s < k)
            {
                Success = false;
                break;
            }
            if (ch == '*')
            {
                s = s + 5;
            }
            else if (ch == '.')
            {
                s = s - 2;
            }
            else
            {
                break;
            }
            if (j != i)
            {
                s--;
            }
        }
    }
    if (Success)
    {
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int m, n, k, s;
    cin >> m >> n >> k >> s;
    char park[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> park[i][j];
        }
    }
    MagicalPark(park, m, n, k, s);

    return 0;
}
