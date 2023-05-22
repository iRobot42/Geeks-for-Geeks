long long countElements( long long a[], long long n ) {
    long long m{ *a }, c{ 1 };
    for ( long long i{ 1 }; i < n; ++i ) {
        if ( a[ i ] > m ) c++;
        m = max( m, a[ i ] );
    }
    return c;
} // T: 0.40 - 0.43
