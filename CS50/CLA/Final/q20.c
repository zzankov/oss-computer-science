    #include <stdio.h> 
    int main(void) { 
        int i = 1, j = 0, k;
        k = (i & j) + (i | j) + (i ^ j) + !i + j;
        printf("%d\n", k); 
        return 0; 
    }
