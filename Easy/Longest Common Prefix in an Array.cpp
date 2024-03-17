string longestCommonPrefix( string a[], int n ) {
    for ( int i{ 1 }; i < n; ++i )
        for ( size_t j{}; j < a[ 0 ].size(); ++j ) {
            if ( a[ i ].size() < a[ 0 ].size() )
                swap( a[ 0 ], a[ i ] );
            if ( a[ i ][ j ] != a[ 0 ][ j ] )
                a[ 0 ] = a[ 0 ].substr( 0, j );
        }
    return a[ 0 ].empty() ? "-1" : a[ 0 ];
}
