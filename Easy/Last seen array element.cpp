int lastSeenElement( int a[], int n ) {
    int r, m[ 100001 ]{};
    while ( n-- ) if ( !m[ a[ n ]] )
        r = a[ n ], m[ a[ n ]] = 1;
    return r;
}
