string MaxNumber( int a[], int n ) {
    int h[ 10 ]{};
    while ( n-- ) h[ a[ n ] ]++;
    string s;
    for ( n = 9; n >= 0; --n )
        while ( h[ n ]-- ) s += 48 + n;
    return s;
} // T: 0.70 - 0.76
