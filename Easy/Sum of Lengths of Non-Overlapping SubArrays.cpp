int calculateMaxSumLength( vector< int >& a, int k ) {
    int sum{}, c{}, f{};
    for ( const int i : a )
        if ( i == k ) ++c, ++f;
        else if ( i < k ) ++c;
        else if ( !f ) c = f = 0;
        else sum += c, c = f = 0;
    return f ? sum + c : sum;
}
