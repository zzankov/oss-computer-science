    #include <stdio.h> 
    struct S {
        int Var;
        struct S *Str;
    };
    int main(void) { 
        struct S S[] = { { 8, NULL }, { 4, &S[0] }, { 2, &S[1] } };
        printf("%d\n", S[2].Str->Str->Var);
        return 0; 
    }
