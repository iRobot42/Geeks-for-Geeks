int print2largest( int a[], int n ) {
    int l1{ *a }, l2{ -1 };
    while ( --n )
        if ( a[ n ] > l2 && a[ n ] != l1 )
            if ( ( l2 = a[ n ] ) > l1 ) swap( l1, l2 );
    return l2;
} // T: 0.15 - 0.17
