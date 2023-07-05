int search( string x, string y ) {
    const int i{ x.rfind( y )};
    return i + ( i != -1 );
} // 0.01+
