vector< int > xor_play( int n ) {
    if ( n == 1 ) return { 0 };
    vector< int > v;
    int t{ sqrt( n ) }; // temp
    for ( int i{ 1 }; i <= t; ++i )
        if ( !( n % i )) v.push_back( i );
    t = v.size() - ( v.back() * v.back() == n );
    while ( --t ) v.push_back( n / v[ t ] );
    for ( const int i : v ) t ^= i;
    return v.push_back( t ), v;
} // 0.06+
