int* greaterElement( int a[], int n ) {
    const set< int > s( a, a + n );
    while ( n-- ) {
        const auto it{ s.lower_bound( a[ n ] + 1 )};
        a[ n ] = it != s.cend() ? *it : -10'000'000;
    }
    return a;
}
