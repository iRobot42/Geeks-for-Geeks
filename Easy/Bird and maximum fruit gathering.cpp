int maxFruits( vector< int > arr, int m ) {
    int res{ accumulate( arr.cbegin(), arr.cbegin() + m, 0 ) };
    for ( int i{}, n{ arr.size() }, sum{ res }; i < n; ++i )
        res = max( res, sum += arr[ ( i + m ) % n ] - arr[ i ] );
    return res;
}
