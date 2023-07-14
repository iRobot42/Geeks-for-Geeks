vector< int > jugglerSequence( int n ) {
    vector< int > v{ n };
    while ( n != 1 )
        v.push_back( n = pow( n, 0.5 + v.back() % 2 ));
    return v;
} // 0.01+
