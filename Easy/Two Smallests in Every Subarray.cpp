int pairWithMaxSum( vector< int >& arr ) {
    int sum{ -1 };
    for ( size_t i{ 1 }; i < arr.size(); ++i )
        sum = max( sum, arr[ i-1 ] + arr[ i ] );
    return sum;
}
