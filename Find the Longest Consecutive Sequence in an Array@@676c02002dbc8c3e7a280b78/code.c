// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    int length = 1;
    for(int i = 1; i < n; i++) {
        int templength = 1;
        for(int j = i; j < n; j++) {
            if(arr[j] - arr[j - 1] == 1) {
                templength++;
            }
        }
        if(templength > length) {
            length = templength;
        }
    }
    printf("%d", length);
    return 0;
}