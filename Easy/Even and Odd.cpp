void reArrange( int a[], int n ) {
    for ( int e{}, o{ -1 }; e < n; )
        if (!( a[ e ] & 1 )) e += 2;
        else swap( a[ e ], a[ o += 2 ] );
}
