bool checkSorted( vector< int >& arr ) {
    size_t swaps{}, i{};
    while ( i < arr.size() )
        if ( arr[ i ] != i + 1 ) {
            swap( arr[ i ], arr[ arr[ i ] - 1 ] );
            if ( ++swaps > 2 ) return false;
        } else ++i;
    return !swaps || swaps == 2;
}
