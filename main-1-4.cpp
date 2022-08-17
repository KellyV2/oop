extern void copy_doubles(double *old_array,double *new_array,int length);

int main() {
    double old_array[3] = {1, 1, 1};
    double new_array[3];
    int length = 3;

    copy_doubles(old_array, new_array, length);

    return 0;
}