string delAlternate( string S ){
    string s;
    for ( size_t i{}; i < S.size(); i += 2 )
        s += S[ i ];
    return s;
} // T: 0.01
