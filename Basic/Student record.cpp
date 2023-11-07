string studentRecord( vector< vector< string >> s, int n ) {
    string r;
    int a{};
    for ( const auto& d : s ) {
        const int A{( stoi( d[ 1 ] ) + stoi( d[ 2 ] ) + stoi( d[ 3 ] )) / 3 };
        if ( A > a ) a = A, r = d.front() + " ";
        else if ( A == a ) r += d.front() + " ";
    }
    return r += to_string( a );
} // 0.85+
