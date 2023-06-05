int minimum_difference( vector< int > n ) {
    sort( n.begin(), n.end() );
    adjacent_difference( n.cbegin(), n.cend(), n.begin() );
    return *min_element( next( n.cbegin() ), n.cend() );
} // T: 0.47+
