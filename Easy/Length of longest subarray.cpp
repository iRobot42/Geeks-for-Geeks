int longestSubarry( vector< int >& arr ) {
    int longest{}, current{};
    for ( const int num : arr )
        if ( num < 0 ) {
            longest = max( longest, current );
            current = 0;
        } else ++current;
    return max( longest, current );
}
