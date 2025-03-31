#include <stdio.h>

int main() {
    int n;
    
    // Input the number of elements
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];

    // Input the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Bubble sort to arrange in ascending order
    for (int p = 0; p < n - 1; p++) {
        for (int c = 0; c < n - p - 1; c++) {
            if (arr[c] > arr[c + 1]) {
                int temp = arr[c];
                arr[c] = arr[c + 1];
                arr[c + 1] = temp;
            }
        }
    }

    // Find the second smallest element
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] != min) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    // If all elements are the same
    printf("-1");
    return 0;
}
