    #include <stdio.h> 
    int main(void) { 
        int i = 16, j = 6;
        while(j > 0) {
                i /= 2;
                j -= i / 2;
        } 
        printf("%d\n",i + j); 
        return 0; 
    }
