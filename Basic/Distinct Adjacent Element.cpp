bool distinctAdjacentElement( int a[], int n ) {
    unordered_map< int, int > m;
    const int mid{ ( n + 1 ) / 2 };
    while ( n-- ) m[ a[ n ] ]++;
    for ( const auto& i : m )
        if ( i.second > mid )
            return false;
    return true;
} // T: 0.53 - 0.58
