    #include <stdio.h> 
    int fun(int *t) {
        return *(++t);
    }
    int main(void) { 
        int arr[] = { 8, 4, 2, 1 };
        printf("%d\n", fun(arr + 2));
        return 0; 
    }
