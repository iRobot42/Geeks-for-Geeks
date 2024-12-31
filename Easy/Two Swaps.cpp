bool checkSorted( vector< int >& arr ) {
    int swaps{};
    for ( size_t i{}; i < arr.size(); ++i )
        if ( arr[ i ] != i + 1 ) {
            swap( arr[ i-- ], arr[ arr[ i ] - 1 ] );
            if ( ++swaps > 2 ) return false;
        }
    return swaps == 0 || swaps == 2;
} // TC: O(n)
