int DiagonalSum( vector< vector< int > >& m ) {
    int sum{};
    for ( size_t i{}; i < m.size(); ++i )
        sum += m[ i ][ i ] + m[ i ][ m.size() - 1 - i ];
    return sum;
} // T: 0.05 - 0.06
