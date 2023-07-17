int onlyFirstAndLastAreSet( long long n ) {
    return --n > 1 && !( n & ( n-1 ));
} // 0.01+
