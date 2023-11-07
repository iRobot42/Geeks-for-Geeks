int repeatedSumMul( int n ) {
    while ( true ) {
        int sum{}, temp{ n };
        do sum += temp % 10;
        while ( temp /= 10 );
        if ( sum < 10 ) break;
        n = sum;
    }
    return n > 99 ? 0 : n / 10 * ( n % 10 );
} // 0.01+
