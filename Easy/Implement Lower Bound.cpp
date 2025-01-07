int lowerBound( vector< int >& arr, int target ) {
    int lower{}, upper{ arr.size() };
    while ( lower < upper ) {
        const int middle{ lower + upper >> 1 };
        if ( arr[ middle ] >= target ) upper = middle;
        else lower = middle + 1;
    }
    return lower;
}
