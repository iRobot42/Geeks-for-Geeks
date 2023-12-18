int count4Divisibiles( int a[], int n ) {
    int f[ 4 ]{};
    while ( n-- ) ++f[ a[ n ] % 4 ];
    return f[ 0 ] * --f[ 0 ] / 2
         + f[ 2 ] * --f[ 2 ] / 2
         + f[ 1 ] * f[ 3 ];
}
