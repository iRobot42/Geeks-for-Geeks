int minSubsets( vector< int >& arr ) {
    sort( arr.begin(), arr.end() );
    int c{ 1 };
    for ( size_t i{ 1 }; i < arr.size(); ++i )
        if ( arr[ i ] != ++arr[ i-1 ] ) ++c;
    return c;
}
