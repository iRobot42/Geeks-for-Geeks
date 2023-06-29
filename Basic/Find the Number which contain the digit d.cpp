vector< int > solve( int n, int d ) {
    if ( n < d ) return { -1 };
    vector< int > v;
    for ( int i{}, t{ i }; i <= n; t = ++i )
        do if ( t % 10 == d ) {
            v.push_back( i ); break;
        } while ( t /= 10 );
    return v;
} // T: 0.01+
