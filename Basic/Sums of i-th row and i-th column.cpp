int sumOfRowCol( int n, int m, vector< vector< int >> a ) {
    int x{ min( n, m ) - 1 };
    do { long r{}, c{};
        for ( int i{}; i < m; ++i ) r += a[ x ][ i ];
        for ( int i{}; i < n; ++i ) c += a[ i ][ x ];
        if ( r != c ) return 0;
    } while ( x-- );
    return 1;
} // T: 0.37+
