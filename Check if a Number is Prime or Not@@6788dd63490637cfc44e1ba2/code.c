#include <stdio.h>
#include <math.h>

int main() {
    int a, prime = 1;
    scanf("%d", &a);

    if (a <= 1)
        prime = 0;
    else {
        for (int i = 2; i <= sqrt(a); i++) {  // √a तक लूप चलाना चाहिए
            if (a % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    prime ? printf("Prime") : printf("Not Prime");
    return 0;
}
