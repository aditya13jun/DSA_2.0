//Find if the number is Even or Odd

#include <iostream>
using namespace std;

bool checkEven(int n)
{
    if (n % 2 == 0)      // By using Bitwise Operator : (n(n&1)==0) then it is even !!
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    bool isEven = checkEven(n);

    if (isEven)
    {
        cout << "It is Even Number!";
    }
    else
    {
        cout << "It is Odd Number!";
    }
}