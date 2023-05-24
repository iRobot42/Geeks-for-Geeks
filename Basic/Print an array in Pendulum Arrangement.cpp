vector< int > pendulumArrangement( int a[], int n ) {
    sort( a, a + n );
    vector< int > v;
    for ( int i{ n - 1 - !( n & 1 ) }; i >= 0; i -= 2 )
        v.push_back( a[ i ] );
    for ( int i{ 1 }; i < n; i += 2 )
        v.push_back( a[ i ] );
    return v;
} // T: 0.54+
