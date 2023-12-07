vector< int > countFreq( int a[], int n ) {
    int s( 1e5+1 ), f[ s ]{}, sum{};
    while ( n-- ) ++f[ a[ n ]];
    vector< int > v;
    while ( ++n < s ) if ( f[ n ] )
        v.push_back( sum += f[ n ] );
    return v;
}
