void segregate0and1( int a[], int n ) {
    int i0{}, i1{ --n };
    while ( i0 < i1 )
        if ( !a[ i0 ] ) ++i0;
        else swap( a[ i0 ], a[ i1-- ] );
}
