int countRotations( string n ) {
    int c{}, s{ n.size() };
    if ( s == 1 ) return n == "4" || n == "8";
    for ( int i{}; i < s; ++i ) {
        rotate( n.begin(), n.begin()+1, n.end() );
        if (!( stoi( n.substr( s-2 )) % 4 )) ++c;
    }
    return c;
} // 0.01+
