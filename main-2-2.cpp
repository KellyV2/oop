#include <iostream>

using namespace std;

extern int max_sub_sum(int *nums,int length);

int main() {
    int nums[3] = {1, 1, 1};
    int length = 3;

    cout << max_sub_sum(nums, length) << endl;

    return 0;
}