bool isUgly(int n) {   
    if (n <= 0) {
        return false;
    }
    int factors[] = {2, 3, 5};
    for (int i = 0; i < 3; i++) {
        n = keepDividingWhenDivisible(n, factors[i]);
    }
    return n == 1;
}
int keepDividingWhenDivisible(int dividend, int divisor) {
    while (dividend % divisor == 0) {
        dividend /= divisor;
    }
    return dividend;
}