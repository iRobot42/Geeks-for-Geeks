int countPairsWithDiffK( int a[], int n, int k ) {
    int m{ *max_element( a, a + n )}, f[ m+1 ]{}, c{};
    while ( n-- ) ++f[ a[ n ]];
    while ( ++n <= m ) if ( f[ n ] )
        if ( !k ) c += f[ n ] * ( f[ n ] - 1 ) / 2;
        else if ( n + k <= m ) c += f[ n ] * f[ n + k ];
    return c;
}
