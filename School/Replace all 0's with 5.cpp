int convertFive( int n ) {
    string s{ to_string( n ) };
    replace( s.begin(), s.end(), '0', '5' );
    return stoi( s );
} // T: 0.01
