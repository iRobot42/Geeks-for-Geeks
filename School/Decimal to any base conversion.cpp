string getNumber( int b, int n ) {
    string s;
    do s += n % b + ( n % b > 9 ? 55 : 48 );
    while ( n /= b );
    return { s.crbegin(), s.crend() };
} // T: 0.01
