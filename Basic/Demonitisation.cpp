string demonitize( string s, string m, string n ) {
    bool b[ s.size() ]{}, f{};
    auto check = [ & ]( const string& S, size_t i ){
        for ( size_t j{}; !f && j < S.size(); ++j )
            if ( S[ j ] != s[ i + j ] ) f = true;
        if ( !f ) fill( b + i, b + i + S.size(), true );
        f = false;
    };
    for ( size_t i{}; i < s.size(); ++i )
        check( m, i ), check( n, i );
    string r;
    for ( size_t i{}; i < s.size(); ++i )
        if ( !b[ i ] ) r += s[ i ];
    return r.empty() ? "-1" : r;
} // T: 0.01+
