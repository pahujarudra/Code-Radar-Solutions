// Your code here...
int kthSmallest(int arr[], int n, int k) {
    int temp;
    while(k > 0) {
        int min = arr[0], minindex = -1;
        for(int i = 0; i < n; i++) {
            if(arr[i] < min) {
                min = arr[i];
                minindex = i;
            }
        }
        if (minindex == -1) return -1;
        temp = arr[minindex];
        arr[minindex] = 1000;
        k--;
    }
    return temp;
}