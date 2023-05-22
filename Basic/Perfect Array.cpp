int check( int a[], int n ) {
    int i{ 1 };
    while ( i < n && a[ i ] > a[ i - 1 ] ) i++;
    while ( i < n && a[ i ] == a[ i - 1 ] ) i++;
    while ( i < n && a[ i ] < a[ i - 1 ] ) i++;
    return i == n;
} // T: 0.10 - 0.11
