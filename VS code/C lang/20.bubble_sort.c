#include <stdio.h>

int main() {
    // array for bubble sorting
    int arr[] = {44, 77, 35, 2, 30, 96, 20, 58, 23, 10};
    int n = sizeof(arr)/4;

    // sorting starts
    for (int i = 0; i < n; i++) {
        int j = i + 1;
        while (j < n) {
            int a = arr[i];
            int b = arr[j];
            if (b < a) {
                // swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j += 1;
        }
    }

    printf("The sorted array is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
