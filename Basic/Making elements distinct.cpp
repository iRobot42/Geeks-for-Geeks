long long minSum( int a[], int n ) {
    long long s{ *a };
    for ( int i{ 1 }; i < n; s += a[ i++ ] )
        if ( a[ i ] <= a[ i-1 ] )
            a[ i ] = ++a[ i-1 ];
    return s;
}
