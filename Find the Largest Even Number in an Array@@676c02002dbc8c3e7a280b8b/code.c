// Your code here...
#include <stdio.h>

int evenmax(int arr[], int n) {
    int max = -1000;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    if(evenmax(arr, n) == -1000) {
        printf("-1");
    }
    else {
        printf("%d", evenmax(arr, n));
    }
    return 0;
}