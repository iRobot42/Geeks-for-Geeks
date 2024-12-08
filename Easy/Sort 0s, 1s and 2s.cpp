void sort012( vector< int >& arr ) {
    // Dutch flag algorithm
    for ( size_t i{}, l{}, r{ arr.size() }; i < r; )
        switch( arr[ i ] ) {
            case 0: swap( arr[ l++ ], arr[ i++ ] ); break;
            case 2: swap( arr[ --r ], arr[ i ] ); break;
            default: ++i; // 1
        }
}
