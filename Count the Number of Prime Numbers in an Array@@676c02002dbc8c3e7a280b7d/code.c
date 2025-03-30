#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        int isPrime = 1;
        if(arr[i] < 2)
        isPrime = 0;
        for(int j = 2; j * j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) count++;
    }
    printf("%d", count);
    return 0;
}