vector< string > findThePattern( int n ) {
    vector< string > pattern( n--, string( n, '$' ));
    for ( int row{}, letter{ 'A' }; row <= n; ++row )
        for ( int col{}; col <= n; ++col )
            if ( !row || !col || row == n || col == n )
                pattern[ row ][ col ] = letter++;
    return pattern;
} // 0.01+
