#include <iostream>

using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main() {
    int old_array;
    int new_array;
    int length;

    copy_integers(old_array, new_array, length);

    return 0;
}