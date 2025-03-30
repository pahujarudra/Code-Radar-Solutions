#include <stdio.h>

int main() {
    int n, num, largestEven = -1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {  // Check if the number is even
            if (largestEven == -1 || num > largestEven) {
                largestEven = num;
            }
        }
    }

    printf("%d\n", largestEven);
    return 0;
}
