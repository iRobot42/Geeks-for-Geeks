vector< int > findFibSubset( int arr[], int n ) {
    unordered_set< int > fib;
    const int lim{ *max_element( arr, arr + n ) };
    for ( int a{}, b{ 1 }; b <= lim; swap( a += b, b ))
        fib.insert( b );
    vector< int > v;
    for ( int i{}; i < n; ++i )
        if ( fib.find( arr[ i ] ) != fib.cend() )
            v.push_back( arr[ i ] );
    return v;
}
