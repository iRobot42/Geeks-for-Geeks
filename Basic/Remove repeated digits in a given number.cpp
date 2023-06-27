long long modify( long long n ) {
    string s{ to_string( n ) };
    return stoll( string{ s.begin(), unique( s.begin(), s.end() )});
} // T: 0.01+
