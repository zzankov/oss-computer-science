    #include <stdio.h> 
    int main(void) { 
        int i = 1, j = i + 2 * i;
        switch(j) {
                default: j = 0;
                case  1: j++; break;
                case  2: j--;
                case  0: j++; break;
        }
        printf("%d\n", ++j); 
        return 0; 
    }
