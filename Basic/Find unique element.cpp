int findUnique( int a[], int n, int k ) {
    unordered_map< int, int > m;
    while ( n-- ) m[ a[ n ] ]++;
    for ( const auto& i : m )
        if ( i.second % k ) return i.first;
    return {};
} // T: 0.4+
