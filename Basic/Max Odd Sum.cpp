long long findMaxOddSubarraySum( long long a[], long long n ) {
    long long s{}, m( 1e3 );
    while ( n-- ) {
        if ( a[ n ] > 0 ) s += a[ n ];
        if ( a[ n ] & 1 ) m = min( m, abs( a[ n ] ) );
    }
    return s & 1 ? s : m != 1e3 ? s - m : -1;
} // T: 0.48 - 0.50
