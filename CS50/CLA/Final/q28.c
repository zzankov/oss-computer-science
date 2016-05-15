    #include <stdio.h> 
    int main(void) { 
        char a = 'A', *b = &a, **c = &b;
        **c = a + (a == *b);
        printf("%c\n", a);
        return 0; 
    }
