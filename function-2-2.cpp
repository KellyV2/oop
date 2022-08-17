int max_sub_sum(int *nums,int length) {
    int sum = 0, neg = 0, maxSum1 = 0, maxSum2 = 0;
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
        for (int k = j; k < length; k++) {
            maxSum2 += nums[j];
            if (maxSum2 > maxSum1) {
                maxSum1 = maxSum2;
            }
        }
        maxSum2 = 0;
    }
    return maxSum1;
}