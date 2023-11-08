vector< int > common_digits( vector< int > nums ) {
    vector< int > a( 10 ), v;
    for ( int n : nums )
        do a[ n % 10 ] = 1;
        while ( n /= 10 );
    for ( int i{}; i < 10; ++i )
        if ( a[ i ] ) v.push_back( i );
    return v;
} // 0.44+
