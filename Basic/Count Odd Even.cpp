vector< int > countOddEven( int a[], int n ) {
    vector< int > v( 2 );
    while ( n-- ) ++v[ !( a[ n ] & 1 ) ];
    return v;
}
