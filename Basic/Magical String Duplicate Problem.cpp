string magicalString( string s ) {
    for ( char& c : s ) c = 219 - c;
    return s;
} // 0.01+
