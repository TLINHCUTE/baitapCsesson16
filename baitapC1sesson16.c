#include<stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;
    printf("gia tri cua x: %d\n", x);
    printf("dia chi cua x: %p\n", (void*)&x);
    printf("Gia tri cua x (thong qua ptr): %d\n", *ptr);
    printf("Dia chi cua x (thong qua ptr): %p\n", (void*)ptr);
    return 0;
}