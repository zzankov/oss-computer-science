    #include <stdio.h> 
    int main(void) { 
        float x = 3.0, y = 2.0; 
        int i = 1, j = 2; 
        x = (int)x / y + (float)i / j; 
        printf("%f\n",x); 
        return 0; 
    }
