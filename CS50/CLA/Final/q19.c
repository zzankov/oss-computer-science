    #include <stdio.h> 
    int main(void) { 
        int i = 5, j = 4;
        for(i--; i--; i--) 
                j--;
        printf("%d\n",i + j); 
        return 0; 
    }
