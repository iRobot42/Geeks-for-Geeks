bool isBinary( string str ) {
    return str.find_first_not_of( "01" ) == string::npos;
} // T: 0.01
