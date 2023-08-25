vector< set< int >> setOperations( set< int > a, set< int > b ) {
    vector< set< int >> v( 3 );
#   define RANGES a.cbegin(), a.cend(), b.cbegin(), b.cend()
#   define INS( x ) inserter( x, x.end() )
    set_union( RANGES, INS( v[ 0 ] ));
    set_difference( RANGES, INS( v[ 1 ] ));
    set_intersection( RANGES, INS( v[ 2 ] ));
    for ( auto& s : v ) if ( s.empty() ) s.insert( 0 );
    return v;
} // 0.27+
