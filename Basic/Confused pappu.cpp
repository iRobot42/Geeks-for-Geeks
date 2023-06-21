long long findDiff( long long amount ) {
    string s{ to_string( amount ) };
    replace( s.begin(), s.end(), '6', '9' );
    return stoll( s ) - amount;
} // T: 0.01+
