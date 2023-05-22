int getCommon( int s1[], int s2[] ) {
    int n{ 10 }, m[ n + 1 ][ n + 1 ]{};
    for ( int i{ 1 }; i <= n; ++i )
        for ( int j{ 1 }; j <= n; ++j ) {
            const int i1{ i - 1 }, j1{ j - 1 };
            m[ i ][ j ] = s1[ i1 ] == s2[ j1 ] ?
                m[ i1 ][ j1 ] + 1 :
                max( m[ i1 ][ j ], m[ i ][ j1 ] );
        }
    return m[ n ][ n ];
} // T: 0.07 - 0.08
