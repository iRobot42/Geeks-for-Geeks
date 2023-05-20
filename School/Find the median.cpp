int find_median( vector< int > v ) {
    sort( v.begin(), v.end() );
    int m{ v.size() / 2 };
    return v.size() % 2 ? v[ m ] : ( v[ m ] + v[ --m ] ) / 2;
} // T: 0.01
