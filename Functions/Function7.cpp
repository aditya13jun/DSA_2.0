//Set the kth Bit


#include <iostream>
using namespace std;

int kthBit(int num, int k)
{
    return num | 1 << k;
}

int main()
{
    int nums, bit;

    cout << "Enter the Number:";
    cin >> nums;

    cout << "Enter the kth Bit:";
    cin >> bit;

    int ans = kthBit(nums, bit);
    cout << "Number after conversion:" << ans;
}