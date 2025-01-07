#include <stdio.h>

int searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;  
}
int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target = 7; 
    int position = searchElement(arr, size, target);
    if (position != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", target, position);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang.\n", target);
    }
    return 0;
}
