string answer( int a[], int n ) {
    const int d{ *a - a[ 1 ] };
    if ( !( n & 1 ) || !d || a[ n / 2 ] != 1 )
        return "No";
    while ( --n )
        if ( abs( a[ n ] - a[ n - 1 ] ) != d )
            return "No";
    return "Yes";
} // T: 0.05+
