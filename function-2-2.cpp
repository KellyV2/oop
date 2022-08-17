int max_sub_sum(int *nums,int length) {
    int sum = 0, neg = 0;
    if (length < 1) {
        return 0;
    }
    for (int i = 0; i < length; i++) {
        if (*(nums+i) < 0) {
            neg++;
        }
    }
    if (neg == length) {
        return 0;
    }
    for (int j = 0; j < length; j++) {
        
    }
    return sum;
}