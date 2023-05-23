int maxProduct( int a[], int n ) {
    int m1{}, m2{};
    while ( n-- )
        if ( a[ n ] > m1 ) m2 = m1, m1 = a[ n ];
        else if ( a[ n ] > m2 ) m2 = a[ n ];
    return m1 * m2;
} // T: 0.34 - 0.37
