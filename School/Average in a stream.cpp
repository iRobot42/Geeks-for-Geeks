vector< float > streamAvg( int a[], int n ) {
    vector< float > v( n ); float total{}; int i{};
    while ( i < n ) v[ i ] = ( total += a[ i ] ) / ++i;
    return v;
} // T: 0.01
