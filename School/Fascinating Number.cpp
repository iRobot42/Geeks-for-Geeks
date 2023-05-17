bool fascinating( int n ) {
    string s{ to_string( n ) + to_string( n * 2 ) + to_string( n * 3 ) };
    return sort( s.begin(), s.end() ), s == "123456789";
} // T: 0.05 - 0.06
