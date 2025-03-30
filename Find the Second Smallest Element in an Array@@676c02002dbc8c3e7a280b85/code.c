// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int p = 0; p < n - 1; p++) {
        for(int c = 0; c < n - p - 1; c++) {
            if(arr[c] > arr[c + 1]) {
                int temp = arr[c];
                arr[c] = arr[c + 1];
                arr[c + 1] = temp;
            }
        }
    }
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] == min) continue;
        printf("%d", arr[i]);
        return 0;
    }
    return 0;
}