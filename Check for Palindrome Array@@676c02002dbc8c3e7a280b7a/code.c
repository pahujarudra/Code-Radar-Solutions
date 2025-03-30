// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    for(int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
        if(arr[i] != arr[j]) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}