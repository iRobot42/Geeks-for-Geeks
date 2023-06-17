char getMaxOccuringChar( string s ) {
    vector<int> h( 26 );
    for ( const char c : s ) ++h[ c - 'a' ];
    return max_element( h.cbegin(), h.cend() ) - h.cbegin() + 'a';
} // T: 0.01+
