// Check if the given number is Prime or not

#include <iostream>
using namespace std;

bool checkPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if ((number % i) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cin >> number;
    bool ans = checkPrime(number);
    if (ans)
    {
        cout << "The given nunber is Prime";
    }
    else
    {
        cout << "The given number is not a Prime";
    }
}