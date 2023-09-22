// Count all Set Bits

#include <iostream>
using namespace std;

//By using normal algorithm
// int countSetBits(int n)
// {
//     int count = 0;

//     while (n > 0)
//     {
//         int bit = n % 2;
//         if (bit == 1)
//         {
//             count++;
//         }
//         n = n / 2;
//     }
//     return count;
// }


//By using Bit Wise algorithm
int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int bit = n & 1;
        if (bit == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int ans = countSetBits(n);
    cout << ans;
}