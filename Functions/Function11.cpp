// Print all digits of a Number

#include <iostream>
using namespace std;

int printDigits(int nums)
{

    while (nums)
    {
        int digit = nums % 10;
        cout << "Digit is: " << digit << endl;
        nums /= 10;
    }
}

int main()
{
    int n;
    cout << "Enter The Number:";
    cin >> n;

    printDigits(n);
}