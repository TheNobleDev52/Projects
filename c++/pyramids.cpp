#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "How many rows do you want in your pyramid?\n"; // Fixed syntax
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
