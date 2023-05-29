int shortestUnorderedSubarray( int a[], int n ) {
    if ( n-- < 3 ) return 0;
    for ( int i{ 1 }; i < n; ++i )
        if ( a[ i ] > a[ i - 1 ] && a[ i ] > a[ i + 1 ] ||
             a[ i ] < a[ i - 1 ] && a[ i ] < a[ i + 1 ] )
            return 3;
    return 0;
} // T: 0.11+
