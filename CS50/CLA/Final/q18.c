    #include <stdio.h> 
    int main(void) { 
        int i = 2, j;
        for(j = 0; j < 0; j -= i) 
                i /= 2;
        printf("%d\n",i + j); 
        return 0; 
    }
