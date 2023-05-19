vector< string > extractIntegerWords( string s ) {
    for ( char& c : s ) if ( !isdigit( c ) ) c = ' ';
    istringstream ss( s );
    vector< string > v;
    while ( ss >> s ) v.push_back( s );
    return v;
} // T: 0.03 - 0.04
