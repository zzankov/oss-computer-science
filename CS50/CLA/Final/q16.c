    #include <stdio.h> 
    int main(void) { 
        int i = 16, j = 8;
        do {
                i /= 2;
                j -= i / 2;
        } while(j > 0);
        printf("%d",i + j); 
        return 0; 
    }
