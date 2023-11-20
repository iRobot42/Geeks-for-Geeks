void frequencyCount( vector< int >& a, int n, int p ) {
    ++p;
    for ( int i{}; i < n; ++i ) {
        const int m{ --a[ i ] % p };
        if ( m < n ) a[ m ] += p;
    }
    while ( n-- ) a[ n ] /= p;
}
