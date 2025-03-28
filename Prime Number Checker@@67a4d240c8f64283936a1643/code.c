// Your code here...
int isPrime(int num) {
    if(i == 0 || i == 1)
    return 0;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0)
        return 0;
    }
    return 1;
}