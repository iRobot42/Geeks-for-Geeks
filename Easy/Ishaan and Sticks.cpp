vector< int > square( int arr[], int n ) {
    int f[ 1001 ]{}, c{}, a{};
    while ( n-- ) ++f[ arr[ n ]];
    while ( ++n < 1001 ) if ( f[ n ] > 3 )
        c = f[ n ] / 4, a = n * n;
    if ( a && c ) return { a, c };
    return { -1 };
}
