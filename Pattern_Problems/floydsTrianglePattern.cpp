#include <iostream>
using namespace std;
int main()
{
    int p = 1;
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << p << "  ";
            p++;
        }
        cout << endl;
    }
}
