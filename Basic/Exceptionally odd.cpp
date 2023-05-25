int getOddOccurrence( int a[], int n ) {
    while ( --n ) *a ^= a[ n ];
    return *a;
} // T: 0.24+
