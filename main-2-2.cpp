#include <iostream>

using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary_digits[7] = {1, 0, 0, 0, 1, 0, 1};
    int number_of_digits = 7;

    cout << bin_to_int(binary_digits, number_of_digits);

    return 0;
}