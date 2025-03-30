// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", n);
    int arr[n], freq[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
        freq[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(arr[j] == arr[i]) {
                freq[i]++;
            }
        }
    }
    int max = freq[0], maxnum = arr[0];
    for(int i = 0; i < n; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxnum = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(freq[i] == max && freq[i] < maxnum) {
            maxnum = arr[i];
        }
    }
    printf("%d\n", maxnum);
    return 0;
}