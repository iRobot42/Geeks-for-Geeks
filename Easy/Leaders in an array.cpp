vector< int > leaders( int a[], int n ) {
    vector< int > v;
    int m{};
    while ( n-- ) if ( a[ n ] >= m )
        v.push_back( m = a[ n ] );
    return { v.crbegin(), v.crend() };
}
