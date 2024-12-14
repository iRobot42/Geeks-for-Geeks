int upperBound( vector< int >& arr, int target ) {
    size_t bound{}, upper{ arr.size() - 1 }, mid;
    while ( bound <= upper )
        if ( arr[ mid = bound + upper >> 1 ] <= target )
            bound = ++mid;
        else upper = --mid;
    return bound;
}
