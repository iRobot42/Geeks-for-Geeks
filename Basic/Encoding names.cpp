string encodeTheName( string s ) {
    string encoded;
    int shift{ 10 };
    for ( const char letter : s )
        encoded += to_string( letter - shift-- );
    return encoded;
} // 0.07+
