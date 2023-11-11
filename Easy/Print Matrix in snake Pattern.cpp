vector< int > snakePattern( vector< vector< int >> m ) {
    vector< int > v;
    for ( size_t i{}; i < m.size(); ++i ) i & 1
        ? v.insert( v.cend(), m[ i ].crbegin(), m[ i ].crend() )
        : v.insert( v.cend(), m[ i ].cbegin(), m[ i ].cend() );
    return v;
}
