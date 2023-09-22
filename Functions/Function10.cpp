// Create Number using digits

#include <iostream>
using namespace std;

int numberUsingDigits(int nums)
{
    int num = 0;
    cout << "Enter the digits:" << endl;
    for (int i = 0; i < nums; i++)
    {
        int digit;
        cin >> digit;

        num = num * 10 + digit;
    }
    return num;
}

int main()
{
    int n;

    cout << "Enter the Number of digits:";
    cin >> n;

    int ans = numberUsingDigits(n);
    cout << "Number Obtained: " << ans;
}