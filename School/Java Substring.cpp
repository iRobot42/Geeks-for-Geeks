string javaSub( string S, int L, int R ) {
    return S.substr( L, ++R - L );
} // T: 0.01
