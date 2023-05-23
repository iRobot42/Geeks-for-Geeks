vector< int > alternateSort( int a[], int n ) {
    sort( a, a + n );
    vector< int > v;
    for ( int i{}, j{ n }; i < --j; ++i ) {
        v.push_back( a[ j ] );
        v.push_back( a[ i ] );
    }
    if ( n & 1 ) v.push_back( a[ n / 2 ] );
    return v;
} // T: 0.50 - 0.54
