long long nthEvenFibonacci( long long n ) {
    n *= 3;
    long long fib{ 1 }, t{ 1 }, d = 1e9+7;
    while ( --n ) swap(( fib += t ) %= d, t );
    return fib;
} // 0.01+
