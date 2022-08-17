#include <string>

using namespace std;

extern void string_2d_copy(string first[][2], string second[][2], int n);

int main() {
    string first[3][2] = {{"Scott", "Scott"}, {"Scott", "Scott"}, {"Scott", "Scott"}};
    string second[3][2];
    int n = 3;

    string_2d_copy(first, second, n);

    return 0;
}