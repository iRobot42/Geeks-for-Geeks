string merge( string s1, string s2 ) {
    string s;
    const size_t I{ min( s1.size(), s2.size() )};
    for ( size_t i{}; i < I; ++i )
        s += s1[ i ], s += s2[ i ];
    return s += s1.substr( I ) + s2.substr( I );
} // T: 0.01+
