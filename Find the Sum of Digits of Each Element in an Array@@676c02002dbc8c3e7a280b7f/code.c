// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        int temp = arr[i], sum = 0;
        if(temp < 0) {
            temp = -temp;
        }
        while(temp > 0) {
            sum = sum + (temp % 10);
            temp /= 10;
        }
        arr[i] = sum;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}