string isStringExist( vector< string > a, int n, string s ) {
    for ( const auto& S : a ) if ( S.size() == s.size() ) {
        int c{};
        for ( size_t i{}; i < s.size(); ++i )
            if ( S[ i ] != s[ i ] && ++c > 1 ) break;
        if ( c == 1 ) return "True";
    }
    return "False";
} // 0.13+
