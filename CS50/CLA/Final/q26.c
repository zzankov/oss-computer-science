    #include <stdio.h> 
    int main(void) { 
        int i, s = 0, t[] = {0, 1, 2, 4, 8, 16};
        for(i = 2; t[i] < 8; i *= 2) 
                s += t[i];
        printf("%d\n", s);
        return 0; 
    }
