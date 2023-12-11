vector< long long > nthRowOfPascalTriangle( int n ) {
    vector< long long > v{ 1 };
    while ( --n ) {
        vector< long long > t( v.size()+1, 1 );
        for ( size_t i{ 1 }; i < v.size(); ++i )
            t[ i ] = ( v[ i ] + v[ i-1 ] ) % 1000000007;
        v = move( t );
    }
    return v;
}
