void printTriangleDownwards( string s ) {
    for ( size_t i{ 1 }; i <= s.size(); ++i )
        cout << string( s.size()-i, '.' ) + s.substr( 0, i ) << endl;
} // 0.02+
