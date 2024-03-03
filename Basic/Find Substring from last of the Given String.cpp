int search( string x, string y ) {
    const auto i{ x.rfind( y )};
    return i + ( i != x.npos );
}
