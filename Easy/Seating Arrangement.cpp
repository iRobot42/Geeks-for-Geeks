bool is_possible_to_get_seats( int n, int m, vector< int >& s ) {
    int c{}; --m;
    for ( int i{}; i <= m; ++i )
        if (( i == 0 || !s[ i-1 ] ) && !s[ i ] &&
            ( i == m || !s[ i+1 ] )) ++c, ++i;
    return c >= n;
}
