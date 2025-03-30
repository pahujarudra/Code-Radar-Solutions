// Your code here...
int findKthMissing(int arr[], int n, int k) {
    int miss = 1;
    while(k > 0) {
        for(int i = 0; i < n; i++) {
            if(arr[i] == miss) miss++;
        }
        miss++;
        k--;
    }
    printf("%d", --miss);
}