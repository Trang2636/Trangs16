#include <stdio.h>

// Hàm c?p nh?t ph?n t? trong m?ng
void updateElement(int *array, int size, int newValue, int position) {
    if (position < 0 || position >= size) {
        printf("\nV? trí c?p nh?t không h?p l?!\n");
        return;
    }
    array[position] = newValue;
}

// Hàm t?m ki?m ph?n t? trong m?ng
int findElement(int *array, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1; // Tr? v? -1 n?u không t?m th?y
}

int main() {
    // Khai báo và gán giá tr? cho m?ng
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // In m?ng ban ð?u
    printf("M?ng ban ð?u: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // G?i hàm t?m ki?m ph?n t?
    int target = 7; // Giá tr? c?n t?m
    int position = findElement(arr, size, target);

    // In k?t qu? t?m ki?m
    if (position != -1) {
        printf("\nPh?n t? %d ðý?c t?m th?y t?i v? trí: %d\n", target, position);
    } else {
        printf("\nPh?n t? %d không t?n t?i trong m?ng!\n", target);
    }

    return 0;
}

