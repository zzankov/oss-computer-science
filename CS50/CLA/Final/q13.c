    #include <stdio.h>
    int main(void) {
        int a = -1, b = 1;
        float i = 2.0, j = -2.0;
        printf("%d\n", (a > b) + (b > a) + (i > j) + (j > i) + ('z' > 'a'));
        return 0;
    }
