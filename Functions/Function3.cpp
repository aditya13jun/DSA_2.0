// Find Factorial of a number

#include <iostream>
using namespace std;

int factFind(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int number;
    cin >> number;
    int ans = factFind(number);
    cout << "The Facrotial of the Number is :" << ans;
}