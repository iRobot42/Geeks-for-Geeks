vector< int > EvenOddSum( int n, int a[] ) {
    int e{}, o{};
    for ( int i{ 0 }; i < n; i += 2 ) e += a[ i ];
    for ( int i{ 1 }; i < n; i += 2 ) o += a[ i ];
    return { e, o };
} // T: 0.20 - 0.23
