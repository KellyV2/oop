void copy_integers(int old_array[],int new_array[],int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 2; j++) {
            new_array[i][j] = old_array[i][j];
        }
    }
}