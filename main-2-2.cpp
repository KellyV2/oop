#include <iostream>

using namespace std;

extern int max_sub_sum(int *nums,int length);

int main() {
    int nums[10] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int length = 10;

    cout << max_sub_sum(nums, length) << endl;

    return 0;
}