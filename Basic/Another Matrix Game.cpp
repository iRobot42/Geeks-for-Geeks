string matrixGame( string s ) {
    if ( s.size() == 1 ) return s;
    const size_t n{ sqrt( s.size() )};
    vector< vector< char >> v( n, vector< char >( n ));
    for ( size_t i{}; i < s.size(); ++i )
        v[ i / n ][ i % n ] = s[ i ];
    s.clear();
    for ( size_t col{}; col < n; ++col ) {
        array< int, 26 > h{};
        for ( size_t row{}; row < n; ++row )
            ++h[ v[ row ][ col ]-'a' ];
        string t;
        for ( size_t row{}; row < n; ++row )
            if ( h[ v[ row ][ col ]-'a' ] == 1 )
                t += v[ row ][ col ];
        if ( t.empty() ) continue;
        for ( size_t l{}, r{ t.size()-1 }; l <= r; ) {
            s += t[ l++ ];
            if ( l <= r ) s += t[ r-- ];
        }
    }
    return s.empty() ? "0" : s;
} // 0.17+
