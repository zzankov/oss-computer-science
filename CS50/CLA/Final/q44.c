    #include <stdio.h> 
    struct S {
        int S[2];
    };
    void f(struct S *S) { 
        S->S[1] = S->S[0] + 2;
    } 
    int main(void) { 
        struct S S = { { 4, 8 } }, *P = &S;
        f(P);
        printf("%d\n",S.S[1] / S.S[0]); 
        return 0; 
    }
