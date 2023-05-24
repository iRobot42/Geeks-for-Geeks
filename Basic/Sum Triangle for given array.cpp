vector< long long > getTriangle( int a[], int n ) {
    vector< long long > v;
    int i{ n };
    while ( i-- ) v.push_back( a[ i ] );
    while ( --n ) {
        i++;
        for ( int j{ n }; j; --j )
            v.push_back( v[ i ] + v[ ++i ] );
    }
    return { v.crbegin(), v.crend() };
} // T: 0.01
