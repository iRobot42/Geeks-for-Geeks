int* game_with_number( int a[], int n ) {
    for ( int i{}; i < n - 1; ++i )
        a[ i ] |= a[ i + 1 ];
    return a;
} // T: 0.01+
