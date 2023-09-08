vector< int > consecutiveSum( int n ) {
    if ( n % 3 ) return { -1 };
    return {( n /= 3 )-1, n, n+1 };
} // 0.01+
