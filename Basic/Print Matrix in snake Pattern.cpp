vector< int > snakePattern( vector< vector< int >> m ) {
    vector< int > v;
    for ( size_t r{}; r < m.size(); ++r )
        for ( size_t c{}; c < m.size(); ++c )
            v.push_back( m[ r ][ r & 1 ? m.size() - 1 - c : c ] );
    return v;
} // T: 0.09+
