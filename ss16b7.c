#include <stdio.h>

void sapXep(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int tam = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tam;
            }
        }
    }
}

int main() {
    int arr[] = {8, 2, 3, 1, 1, 6,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("mang luc dau laa :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sapXep(arr, size);

    printf("mang khi da sap xep la :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

