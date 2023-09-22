// Find the reverse of an Integer

#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x)
{
    int ans = 0, rem = 0;
    bool isNeg = false;
    while (x < 0)
    {
        isNeg = true;
        x = -x;
    }
    // if (x <= INT_MAX)
    // {
    //     return 0;
    // }

    while (x > 0)
    {
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x / 10;

        // if (ans > INT_MAX / 10)
        // {
        //     return 0;
        // }
    }
    return isNeg ? -ans : ans;
}

int main()
{
    int x;
    cin >> x;
    int ans = reverse(x);
    cout << ans;
}