int sortedCount( int n, int m, vector< vector< int >> M ) {
    int c{};
    for ( const auto& i : M ) if (
        is_sorted( i.cbegin(), i.cend(), greater_equal<>() ) ||
        is_sorted( i.cbegin(), i.cend(), less_equal<>() )) ++c;
    return c;
} // T: 0.19+
