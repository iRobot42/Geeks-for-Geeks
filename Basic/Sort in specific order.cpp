void sortIt( long long a[], long long n ) {
    int c{};
    for ( int i{}; i < n; ++i )
        if ( a[ i ] & 1 )
            swap( a[ i ], a[ c++ ] );
    sort( a, a + c, greater<>() );
    sort( a + c, a + n );
} // T: 0.53 - 0.58
