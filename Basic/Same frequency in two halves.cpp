bool passed( string s ) {
    vector< int > h( 26 + 'a' );
    for ( size_t l{}, r{ s.size()-1 }; l < r; ++l, --r )
        ++h[ s[ l ] ], --h[ s[ r ] ];
    for ( const int i : h ) if ( i ) return false;
    return true;
} // T: 0.05+
