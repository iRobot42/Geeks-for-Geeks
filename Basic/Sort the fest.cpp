string is_common( vector< string >& s, vector< string >& t ) {
    unordered_set< string > h( s.cbegin(), s.cend() );
    for ( const auto& i : t )
        if ( h.find( i ) != h.cend() ) return "CHANGE";
    return "BEHAPPY";
} // 0.03+
