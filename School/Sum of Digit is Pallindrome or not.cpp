int isDigitSumPalindrome( int n ) {
    int sum{};
    do sum += n % 10; while ( n /= 10 );
    string s{ to_string( sum ) };
    return s == string( s.crbegin(), s.crend() );
} // T: 0.01
