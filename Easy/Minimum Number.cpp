int minimumNumber( int n, vector< int >& arr ) {
    return accumulate( arr.cbegin(), arr.cend(), 0,
        []( int a, int i ){ return __gcd( a, i ); });
}
