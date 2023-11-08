string isSubset( int a1[], int a2[], int n, int m ) {
    int a[ 1000001 ]{};
    while ( n-- ) ++a[ a1[ n ]];
    while ( m-- ) if ( --a[ a2[ m ]] < 0 ) return "No";
    return "Yes";
} // 0.11+
