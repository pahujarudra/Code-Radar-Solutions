void fibonacciSeries(int n) {
    int first = 0, second = 1, next;
    for(int i = 1; i <= n; i++) {
        printf("%d ", first);
        int next = first + second;
        first = second;
        second = next;
    }
}