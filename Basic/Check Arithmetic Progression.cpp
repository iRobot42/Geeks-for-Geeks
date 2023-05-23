bool checkIsAP( int a[], int n ) {
    sort( a, a + n );
    int d{ a[ --n ] - a[ --n ] };
    while ( n )
        if ( a[ n ] - a[ --n ] != d )
            return false;
    return true;
} // T: 0.67 - 0.73
