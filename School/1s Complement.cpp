string onesComplement( string s, int n ) {
    for ( char& c : s ) c ^= 1;
    return s;
} // T: 0.01
