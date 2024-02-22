int* modifyArray( int a[], int n ) {
    while ( n-- )
        if ( a[ n ] != n && a[ n ] >= 0 )
            swap( a[ n++ ], a[ a[ n ]] );
    return a;
}
