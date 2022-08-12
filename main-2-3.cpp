#include <iostream>

using namespace std;

extern int palindrome_sum(int integers[], int length);

int main() {
    int integers[3] = {1,0,1};
    int length = 3;

    cout << palindrome_sum(integers, length) << endl;

    return 0;
}