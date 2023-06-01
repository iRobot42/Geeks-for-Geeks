int countZeros( vector< vector< int >> a ) {
    int c{};
    for ( auto& r : a )
        for ( int i : r )
            if ( i ) break;
            else ++c;
    return c;
} // T: 0.04+
