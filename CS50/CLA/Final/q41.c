    #include <stdio.h> 
    int f(int v) { 
                v = 2 * v;
        return v * v;
    } 
    int main(void) { 
        int i = 2; 
        f(i); 
        printf("%d\n",i); 
        return 0; 
    }
