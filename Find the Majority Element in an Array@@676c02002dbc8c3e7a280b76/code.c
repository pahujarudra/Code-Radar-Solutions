// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int maxcount = 0, maxnum = -1;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = i; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > n / 2 && count > maxcount) {
            maxcount = count;
            maxnum = arr[i];
        }
    }
    printf("%d", maxnum);
    return 0;
}