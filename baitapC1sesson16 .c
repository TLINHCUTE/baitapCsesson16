#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;
    //1
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", &x); 
    //2
    printf("Gia tri cua x (thong qua ptr): %d\n", *ptr);
    printf("Dia chi cua x (thong qua ptr): %p\n", ptr);  
    return 0;
}
