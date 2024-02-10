int* Rearrange( int* a, int n ) {
    while ( n-- )
        while ( a[ n ] >= 0 && a[ n ] != n )
            swap( a[ n ], a[ a[ n ]] );
    return a;
}
