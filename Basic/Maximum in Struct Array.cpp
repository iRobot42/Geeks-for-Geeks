int findMax( Height a[], int n ) {
    int m{};
    while ( n-- ) m = max( m, 12 * a[ n ].feet + a[ n ].inches );
    return m;
} // T: 0.01
