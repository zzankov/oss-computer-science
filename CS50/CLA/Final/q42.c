    #include <stdio.h> 
    char *f(char *p) { 
        return p++;
    } 
    char *g(char *p) {
        return p += 2;
    }
    int main(void) { 
        char *s = "ABCDEFGHIJ";
        char  p = *f(g(f(s + 6)));
        printf("%d\n",p - 'A'); 
        return 0; 
    }
