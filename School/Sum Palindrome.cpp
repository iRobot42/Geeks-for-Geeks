long long isSumPalindrome( long long n ) {
    for ( int i{}; i <= 5; ++i ) {
        long long r{}, c{ n };
        do r = r * 10 + c % 10;
        while ( c /= 10 );
        if ( n == r ) return n;
        n += r;
    }
    return -1;
} // T: 0.01
