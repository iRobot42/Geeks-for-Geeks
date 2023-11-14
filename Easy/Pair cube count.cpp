int pairCubeCount( int n ) {
    int c{};
    for ( int a{ 1 }, r{ cbrt( n )}; a <= r; ++a ) {
        const int b3{ n - pow( a, 3 )}, b{ cbrt( b3 )};
        if ( b3 == pow( b, 3 )) ++c;
    }
    return c;
}
