vector< int > increment( vector< int > a, int n ) {
    while ( n-- )
        if ( a[ n ] == 9 ) a[ n ] = 0;
        else return ++a[ n ], a;
    return a.front() = 1, a.push_back( 0 ), a;
}
