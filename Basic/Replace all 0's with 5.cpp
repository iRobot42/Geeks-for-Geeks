int convertFive( int n ) {
    string s{ to_string( n ) };
    return replace( s.begin(), s.end(), 48, 53 ), stoi( s );
} // T: 0.01
