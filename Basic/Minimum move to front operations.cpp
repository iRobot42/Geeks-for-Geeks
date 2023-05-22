int minMoves( int a[], int n ) {
    int c{ n };
    while ( n-- ) if ( a[ n ] == c ) c--;
    return c;
} // T: 0.20 - 0.23
