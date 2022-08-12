#include <cmath>

int main() {
    int binaryNumber = 0;

    for (int i = 0; i < number_of_digits; i++) {
        if (binary_digits[i] == 1) {
            binaryNumber += pow(2, (number_of_digits - i - 1));
        }
    }

    return binaryNumber;
}