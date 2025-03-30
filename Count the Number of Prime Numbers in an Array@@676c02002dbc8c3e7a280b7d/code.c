// Your code here...
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
        int current = 1;
        if(arr[i] < 2) continue;
        for(int j = 2; j * j <= i; j++) {
            if(arr[i] % j == 0) {
                current = 0;
            }
        }
        count += current;
    }
    printf("%d", count);
    return 0;
}