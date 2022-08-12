bool is_array_palindrome(int integers[], int length) {
    bool state = true;
    for (int i = 0; i <= length / 2 && length != 0; i++) {
        if (integers[i] != integers[length - i - 1]) {
            state = false;
            break;
        }
    }
    return state;
}

int sum_integers(int integers[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += integers[i];
    }
    return sum;
}

int palindrome_sum(int integers[], int length) {
    bool state = is_array_palindrome(integers, length);
    int sum;

    if (state == 0) {
        return -2;
    } else {
        sum = sum_integers(integers, length);
    }

    return sum;
}