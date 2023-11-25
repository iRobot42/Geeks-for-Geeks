int missingNumber( vector< int >& a, int n ) {
    return n++ * n / 2 - accumulate( a.cbegin(), a.cend(), 0 );
}
