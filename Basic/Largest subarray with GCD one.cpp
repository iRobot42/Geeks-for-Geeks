int findLargestSubarray( int a[], int n ) {
    for ( int i{ 1 }, g{ *a }; i < n; ++i )
        if (( g = __gcd( g, a[ i ] )) == 1 )
            return n;
    return -1;
} // 0.02+
