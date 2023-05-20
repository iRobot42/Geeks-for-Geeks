string is_palindrome( int n ) {
    const string s{ to_string( n ) };
    return s == string( s.crbegin(), s.crend() ) ? "Yes" : "No";
} // T: 0.01
