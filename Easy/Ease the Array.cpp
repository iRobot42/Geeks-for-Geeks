void modifyAndRearrangeArr( int arr[], int n ) {
    int i{}, a{}, b{ 1 };
    do if ( arr[ a ] ) {
        if ( arr[ a ] == arr[ b ] )
            arr[ a ] *= 2, arr[ b ] = 0;
        swap( arr[ a ], arr[ i++ ] );
    } while ( ++a, ++b < n );
    swap( arr[ a ], arr[ i ] );
}
